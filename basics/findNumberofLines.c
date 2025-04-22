/* This c program will give you the number of lines in a file.*/


#include <stdio.h>
#include <strings.h>


char FILENAME[255];

int main(int argc, char *argv[]){
    FILE *fileptr;


    if ((argc > 0) &  (fopen(argv[1], "r") != NULL )){

        strcpy( FILENAME,argv[1]);

    } else {
        printf("Could not read file\n");
        strcpy(FILENAME,"/Users/jonumah/Documents/GOGO_CODEBASE/ucs-jaguar/src/arincd/data/airport.csv");
    }

    fileptr = fopen(FILENAME, "r");

    char buffer[255];

    int line = 0;


    while (fgets(buffer,  255, fileptr) != NULL){
        line++;
        // printf("%s\n",buffer);
        // printf("%d\n",line);
    }

    printf("This file has %d number of lines", line);
}