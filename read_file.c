/*
I am going to read a file in C.
*/

#include <stdio.h>
#define FILENAME "/Users/jonumah/Documents/GOGO_CODEBASE/ucs-jaguar/src/arincd/data/airport.csv"

int main (){

    printf("This is the name of the file I will be reading.\n Name: %s\n", FILENAME);

    //Create pointer object for the file

    FILE* fp;

    FILE *newFile;

    // Read the file

    fp = fopen(FILENAME,"r");


    // Open file to write to it.
    newFile = fopen("output.txt", "w+");


    // check if the file we are reading from exists. If it doesn't we get NULL.
    if (fp == NULL) {
        printf("The file does not exist");
        return 1;
    } else {
        //Create buffer to hold contents read from the file.
        char buffer[255];

        for ( int i = 0; i < 5; i++) {
                // Read the file
                // fgets takes a buffer, a size to read, and the file handler
                fgets(buffer, 255, fp);

                //Print the line

                printf("This is the line read.\n %s",buffer);


                // write line to another file
                fprintf(newFile, "%s", buffer);
        }


    // fputs writes the specified string to a file.
    fputs("This is me about to close the file\n", newFile);
    fclose(newFile);
    // Close the file
    fclose(fp);
    }
    return 0;
}