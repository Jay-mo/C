#include <stdio.h>

int main(void){
    char name[] = "Harry Potter";


    printf("%c\n", *name);
    printf("%c\n", *(name + 1));

    printf("%c\n", *(name+5));


    char *namePtr;

    namePtr = name;

    printf("%c\n", *(namePtr+7));
    printf("%p and %p",name, namePtr);
}