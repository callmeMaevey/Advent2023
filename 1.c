// Maeve K. Kennedy
// Advent of Code 2023 Day 1
// written Dec 4th (late start)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char getFirst(char *line) {
    char retVal = '\0'; // \0 means not found
    int offset = 0;
    while (offset < strlen(line) && retVal == '\0') {
        if ( isdigit( *(line + offset) )) {
            retVal = line[offset];
        }
        offset++;
    }//walks forward until digit char is found
    return retVal;
}

char getLast(char *line) {
    char retVal = '\0'; // \0 means not found
    int offset = strlen(line);
    while (offset > 0 && retVal == '\0') {
        --offset;
        if ( isdigit( *(line + offset) )) {
            retVal = line[offset];
        }
    }//walks backwards until digit is found
    return retVal;
}

int main(int argc, char** argv) {
    
    if(argc < 2){ printf("call with path as argv[1]\n"); return -1; } // prevents errors
    int maxlen = 64;
    char *line = (char *)malloc(sizeof(char) * maxlen);

    //file setup
    FILE* file = fopen( argv[1], "r");//open readonly
    if(file==NULL){ printf("file not found\n"); return -1; } //catch fnf

    char values[2];
    int total = 0;
    while(fgets(line, maxlen, file)){ //while next line exists, copy it into &line

        values[0] = getFirst(line);
        values[1] = getLast(line);
        total+=atoi(values); //this is cause C is such a cool language

    }
    fclose(file);
    free(line);
    
    printf("%i\n",total);
    return 0;
}