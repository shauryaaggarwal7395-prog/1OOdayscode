/*(Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.*/

#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int firstDigit, lastDigit, temp;
    int digits = 0;
    int swapped_number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 10) {
        printf("The swapped number is %d\n", number);
        return 0;
    }

    temp = number;
    lastDigit = number % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }

    firstDigit = temp;

    swapped_number = lastDigit * pow(10, digits) + (number - firstDigit * pow(10, digits) - lastDigit) + firstDigit;

    printf("The number with first and last digits swapped is: %d\n", swapped_number);

    return 0;
}
