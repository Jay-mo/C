#include <stdio.h>

struct Student
{
    /* data */
    char name[50];
    int age;
    float grade;
};


int main(){
    short a;
    long b;
    long long c;
    long double d;

    char buffer[200];

    struct Student s1 = {"John Mensah Onumah",20, 10};
    struct Student jay;


    printf("size of short = %lu bytes\n", sizeof(a));
    printf("size of struct = %lu bytes\n", sizeof(s1));
    printf("size of buffer = %lu bytes \n", sizeof(buffer));

}