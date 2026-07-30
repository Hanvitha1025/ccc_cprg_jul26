#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 10, num3 = 5;
    num2++;
    printf("Num1=%d, Num2=%d, Num3=%d \n", num1, num2, num3);
    ++num2;
    printf("Num1=%d, Num2=%d, Num3=%d \n", num1, num2, num3);
    num1 = num3--;
    printf("Num1=%d, Num2=%d, Num3=%d \n", num1, num2, num3);
    num2 = --num1;
    printf("Num1=%d, Num2=%d, Num3=%d \n", num1, num2, num3);
    num3 = num1++ + ++num1;
    printf("Num1=%d, Num2=%d, Num3=%d \n", num1, num2, num3);
}

/*
i++;
j--;'
a[i] = b[j];
b[j]--;

a[++i] = b[--j]--;
*/
