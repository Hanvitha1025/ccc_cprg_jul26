#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char **args)
{
    int inputNumber = atoi(args[1]);
    int sumOfDigits = 0, remainderDigit = 0;
    printf("The input number is %d \n", inputNumber);
    while (inputNumber > 0)
    {
        remainderDigit = inputNumber % 10;
        sumOfDigits = sumOfDigits + remainderDigit;
        inputNumber = inputNumber / 10;
        if (inputNumber == 0 && sumOfDigits > 9)
        {
            inputNumber = sumOfDigits;
            sumOfDigits = 0;
        }
    }
    printf("Your Lucky digit is %d", sumOfDigits);
}
