//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("The sum is = %d , The difference is = %d , The product is = %d , The quotent is = %d ", a + b , a - b , a * b , a / b);
    return 0;
}