//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main(){
    float p, r, t, si, ci, amt;
    printf("Enter principal value : ");
    scanf("%f", &p);
    printf("Enter rate : ");
    scanf("%f", &r);
    printf("Enter time : ");
    scanf("%f", &t);
    si = p * r * t / 100;
    amt = p * pow((1 + r / 100),t);
    ci = amt - p;
    printf("The simple interest : %0.2f\n", si);
    printf("The compound intrest is : %0.2f", ci);
    return 0;
}