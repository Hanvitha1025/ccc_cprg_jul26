#include <stdio.h>

int main()
{
    short int num = 20;
    short int *p = &num;
    printf("%d  %d  %d  %d  %d \n", num - 1, num, num + 1, num + 2, num + 10);
    printf("%u  %u  %u  %u  %u \n", p - 1, p, p + 1, p + 2, p + 10);
    printf("%u  %u  %u", &p - 1, &p, &p + 1);
}
