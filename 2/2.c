// Maeve K. Kennedy
// Advent of Code 2023 Day 2
// written Dec 5th (late start)
// this one would be so easy in c#

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int game;
    int red;
    int blue;
    int green;
} colorVals;


int getGameNumber(char* line){
    char* number= (char*)malloc(sizeof(char) * 4);//leaving an extra space for posterity
    strncpy( number, (line+4), sizeof(char) * 4 );
    return atoi(number);
}


void populateScruct(char* line, colorVals* maxVals){

    maxVals->game = getGameNumber(line);
// use getgamenumber to assign gamenubmer
//looks for Red, blue or green 
// then get prefixed value and cast to int
// if that int is greater than maxVals,
//update struct
    for(int index=0;index<strlen(line);index++){
    // .  THIS IS WHERE I RAN OUT OF TIME FOR THE NIGHT :(
    //    ifstrncmp( line+index, "green", 5 ); 
    }


}




int main(int argc, char const *argv[])
{
    
    if(argc < 2){ printf("call with path as argv[1]\n"); return -1; } // prevents errors
    
    //file setup
    FILE* file = fopen( argv[1], "r");//open readonly
    if(file==NULL){ printf("file not found\n"); return -1; } //catch fnf
    int maxlen = 256;
    char *line = (char *)malloc(sizeof(char) * maxlen);

    colorVals* maxVals = (colorVals*)malloc(sizeof(colorVals));
    while(fgets(line, maxlen, file)){ //while next line exists, copy it into &line
         
        // printf("line: %s\n",line);
        populateScruct(line,maxVals);
        
        printf("%d\n",maxVals->game);
    }
    fclose(file);
    free(line);
    free(maxVals);
    
    
    return 0;
}
