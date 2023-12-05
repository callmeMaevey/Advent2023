#include <stdio.h>
#include <string.h>
#include <ctype.h>

int getFirst(char* line){
    size_t len=strlen(line);
    for (int i = 0; i<len; i++){
        if(isdigit(line[i])){
            return line[i];
        }
    }
    return -1; //fail case 
}

int getLast(char* line){
    size_t len=strlen(line);
    for (int i = len; i>0; --i){
        if(isdigit(line[i])){
            return line[i];
        }
    }
    return -1; //fail case 
}


int main(){

    printf("%i", getFirst("your7mom"));
    printf("%i", getLast("your7mom"));

    return 0;
}