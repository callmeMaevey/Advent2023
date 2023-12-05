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
    printf("%c\n", retVal);
    return retVal;
}


int main() {

    printf("%c\n", getFirst("6your7mom"));

    // printf("%i", getLast("your7mom"));

    return 0;
}