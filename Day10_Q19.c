//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the sides of the triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c){
        printf("It is an Equilateral triangle");
    }else if(a == b || b == c || c == a){
        printf("It is an Isosceles triangle");
    }else if(a != b && b != c){
        printf("It is a Scalene triangle");
    }else{
        printf("It is not a triangle");
    }
    return 0;
}