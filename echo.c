#include <stdio.h>

int main(){
    char name[30];
    printf("Enter your name: ");
    fgets(name,30,stdin);
    printf("Your name is: ");
    puts(name);
    return 0;
}
