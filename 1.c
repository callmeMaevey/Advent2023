#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char getFirst(char *line) {
    char retVal = '\0'; // \0 means not found
    char* value = calloc( sizeof(' '), strlen(line) );
    strcpy(value, line);
    int offset = 0;
    while (offset < strlen(line) && retVal == '\0') {
        if ( isdigit( *(value + offset) )) {
            retVal = value[offset];
        }
        offset++;
    }
    free(value);
    return retVal;
}

char getLast(char *line) {
    char retVal = '\0'; // \0 means not found
    char* value = calloc( sizeof(' '), strlen(line) );
    strcpy(value, line);
    int offset = strlen(line);
    while (offset > 0 && retVal == '\0') {
        --offset;
        if ( isdigit( *(value + offset) )) {
            retVal = value[offset];
        }
    }
    free(value);
    return retVal;
}

int main() {
    char first = getFirst("6your7mom");
    printf("%i\n", atoi(&first));

    char last = getLast("8your9mom");
    printf("%c\n", last);


    return 0;
}