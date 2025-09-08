//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("It ia a leap year");
     }else{
        printf("It is not leap year");
     }
    return 0;
}