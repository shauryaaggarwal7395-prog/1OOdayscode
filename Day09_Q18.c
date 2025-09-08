//Q18: Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main(){
    float m;
    printf("Enter your percentage :");
    scanf("%f", &m);
    if(m >= 95 && m <= 100){
        printf("GRADE 'A' ");
    }else if(m >= 80 && m <= 94){
        printf("GRADE 'B' ");
    }else if(m >= 75 && m <= 79){
        printf("GRADE 'C' ");
    }else if(m >= 70 && m <= 74){
        printf("GRADE 'D' ");
    }else if(m >= 65 && m <= 69){
        printf("GRADE 'E' ");
    }else if(m >= 33 && m <= 64){
        printf("GRADE 'F' ");
    }else{
        printf("GRADE NOT AVAILABLE");
    }
    return 0;
}