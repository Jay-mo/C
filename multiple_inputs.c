#include <stdio.h>


int main (){

    int a, b;
    float c;
    printf("Enter three numbers , two integers and a float\n");
    scanf("%d %d %f",&a,&b,&c);

    printf("These are the numbers you entered: %d, %d, %f",a,b,c);


    for (int i = 0; i < 5; i++){
        printf("This is the value of i: %d\n",i);
    }   
}