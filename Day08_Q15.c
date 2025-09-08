//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>                                                       // ascii codes used here
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if(ch >= 48 && ch <= 57){
        printf("It is a digit ");
    }else if(ch >= 65 && ch <= 90){
        printf("It is uppercase "); 
    }else if(ch >= 97 && ch<= 122){
        printf("It is lowercase ");
    }else{
        printf("It is special character ");
    }
    return 0;
}