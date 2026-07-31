#include <stdio.h>

int main()
{
    double num = 5.5;
    double *p = &num;
    double** pp = &p;

    printf("Value of pp (pp) = %u \n", pp);
    printf("Value of p (*pp) = %u \n", *pp);
    printf("Value of num (**pp) = %.2lf \n", **pp);
    printf("Value of num ***(&pp) = %.2lf \n", ***(&pp));
    printf("Address of pp (&pp) = %u \n", &pp);
    printf("Address of p (pp) = %u \n", pp);
    printf("Address of num (*pp) = %u \n", *pp);

}
