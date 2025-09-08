//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    float c, Fahrenheit;
    printf("Enter temperature in celsius = ");
    scanf("%f", &c);
    Fahrenheit = (c * 9 / 5) + 32;
    printf("%0.2f", Fahrenheit);
    return 0;
}