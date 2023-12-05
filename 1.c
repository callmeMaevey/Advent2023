#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getFirst(char *line) {
    char* value = calloc( sizeof(' '), strlen(line) );
    strcpy(value, line);
    int offset = 0;
    int retVal = -1; // -1 means not found
    while (offset < strlen(value)) {
        if ( isdigit( *(value + offset) )) {
            retVal =  *(value + offset);
        }
        offset++;
    }
    printf("%i", retVal );
    return retVal;
}

    int getLast(char *line) {
    char *index = line;
    int offset = strlen(line) - 1;
    while (offset >= 0) {
        if (isdigit( *(index + offset))) {
            return *(index + offset);
        }
        offset--;
    }

    return -1; //errorcase number Not Found
}

int main() {

    printf("%i", getFirst("your7mom"));

    // printf("%i", getLast("your7mom"));

    return 0;
}