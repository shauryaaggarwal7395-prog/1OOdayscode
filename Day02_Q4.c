//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#define PI 3.141
int main(){
    int r;
    printf("Enter radius of circle = ");
    scanf("%d", &r);
    printf("Area of circle = %0.4f, Circumference of circle = %0.4f", PI * r * r, 2 * PI * r);
    return 0;
}