//Q37: Write a program to find the LCM of two numbers.

#include<stdio.h>
int main(){
    int num1, num2, lcm;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    lcm = (num1 > num2) ? num1 : num2;
    int max = lcm;
    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            break;
        }else
        {
            max = max + lcm;
        }
    }
    printf("LCM of the numbers %d and %d are : %d", num1, num2, max);
    return 0;
}

/*
#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    int max = num1 > num2 ? num1 : num2;
    int lcm = max;
    while (1){
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }else {
            lcm = lcm + max;
        }
   }
    printf("%d",lcm);
    return 0;
}*/