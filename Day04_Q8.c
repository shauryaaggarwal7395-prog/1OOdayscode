//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum;
    sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("The sum of first n natural number is : %d", sum);
    return 0;
}