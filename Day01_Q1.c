//Q1: Write a program to input two numbers and display their sum.

#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("The sum is = %d", a + b);
    return 0;
}