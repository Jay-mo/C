#include <stdio.h>


int main() {
    double miles = 2;


    // declaration and initialization steps in one line.
    char letter = 'a';

    printf("letter = %c \n", letter);
    printf("letter ascii number is %d\n", letter);

    printf("Give me a character to print on the terminal\n");

    char inputCharacter ;

    scanf("%c", &inputCharacter);

    printf("You gave me this character %c \n",inputCharacter);

    printf("This is its ascii value %d\n", inputCharacter);

    printf("This is its memory address %p\n", &inputCharacter);

    if ((int) inputCharacter > 96)
        printf("This is a lowercase character\n");


    int x, y;

    x = 2;
    y = x++;

    printf("x = %d",x);
    printf("y = %d",y);

    return 0;
}