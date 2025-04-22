#include <stdio.h>
#define KMS_PER_MILE 1.609

int main() {

    // declaration of variable
    float miles;
    float kms;


    //miles = 2;


    printf("Hello John.\n Kindly enter the number of mile you want to convert to km.\n");

    // how to read input from terminal or stdin.
    scanf("%f", &miles);


    // initialization of variables
    kms = KMS_PER_MILE * miles;

    printf("I am converting %.2f miles to km.",miles);
    printf("The answer is %.2f",kms);
}