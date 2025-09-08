//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int sec;
    printf("Enter second : ");
    scanf("%d", &sec);
    int hr = sec / 3600;
    int min = (sec % 3600) / 60;
    int second = sec % 60;
    printf("%d:%d:%d", hr, min, second);
    return 0;
}