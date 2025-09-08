//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){
    int l, b;
    printf("Enter the length of rectangle : ");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle : ");
    scanf("%d", &b);
    printf("Area of rectangle is = %d, Perimeter of rectangle is = %d", l * b, 2*(l * b));
    return 0;
}