//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("%d\n", a);
    printf("%d", b);
    return 0;
}