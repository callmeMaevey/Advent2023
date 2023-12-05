#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char getFirst(char *line) {
    char retVal = '\0'; // \0 means not found
    // char* value = calloc( sizeof(' '), strlen(line) );
    // strcpy(value, line);
    int offset = 0;
    while (offset < strlen(line) && retVal == '\0') {
        if ( isdigit( *(line + offset) )) {
            retVal = line[offset];
        }
        offset++;
    }
    // free(value);
    return retVal;
}

char getLast(char *line) {
    char retVal = '\0'; // \0 means not found
    // char* value = calloc( sizeof(' '), strlen(line) );
    // strcpy(value, line);
    int offset = strlen(line);
    while (offset > 0 && retVal == '\0') {
        --offset;
        if ( isdigit( *(line + offset) )) {
            retVal = line[offset];
        }
    }
    // free(value);
    return retVal;
}



int main(int argc, char** argv) {

    if(argc < 2){ return -1; }

//file setup
    int maxlen = 64;
    char *line = (char *)malloc(sizeof(char) * maxlen);

    FILE* file = fopen( argv[1], "r");
    if(file==NULL){
        printf("filenotfound\n");
        return -1;
    }
    char values[2];
    int total = 0;
    while(fgets(line, maxlen, file)){

        values[0] = getFirst(line);
        values[1] = getLast(line);
        printf("%i\n",atoi(values));
        total+=atoi(values);
    }
    fclose(file);
    free(line);
    
    printf("%i\n",total);
    return 0;
}