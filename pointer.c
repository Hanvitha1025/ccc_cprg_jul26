#include <stdio.h>

int main()
{
    double num = 5.5;
    double *p = &num;
    printf("Value of num (num) = %lf \n", num);                                // double
    printf("Address of num (&num) = %u \n", &num);                             // double*
    printf("Address of num (p) = %u \n", p);                                   // double*
    printf("Value of num (*p) = %lf \n", *p);                                  // double*
    printf("Value of num (&num) = %lf \n", *(&num));                           // double
    printf("Address of p (&p) = %u \n", &p);                                   // double**
    printf("Address of next double value after num (&num) = %u \n", &num + 1); // double*
}
