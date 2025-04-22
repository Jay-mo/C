#include <stdio.h>


typedef struct Node
{
    int number;
    struct Node* next;
}Node;


int main (){

    char firstLetter = 'A';
    char secondLetter = 'B';
    char thirdLetter = 'C';
    char *name = "John";

    printf("This is the letter: %c and this is its address %p\n",firstLetter,&firstLetter);
    printf("This is the letter: %c and this is its address %p\n", secondLetter, &secondLetter);
    printf("This is the letter: %c and this is its address %p\n", thirdLetter, &thirdLetter);
    printf("This is my name %s\n", name);
    printf("This is the address of name: %p\n",name);
    printf("This is the address of name[0]: %p. It's value is %c\n",&name[0], name[0]);
    printf("This is the address of name[1]: %p\n",&name[1]);
    printf("This is the address of name[4]: %p\n It's value is %i\n",&name[4], name[4]);

    Node John = {24};
    Node Phina = {32};

    John.next = &Phina;

    printf("this is my first node, %p", John.next);


    char *nameArray[] = {"John", "Adwoa"};

    return 0;
}