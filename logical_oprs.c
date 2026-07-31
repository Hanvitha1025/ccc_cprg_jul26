#include <stdio.h>

int main()
{
    int x = 8, y = 13, z = -5;

    if (x++ != y & --z != y-- && y == z || z-- != x--)
    {
        puts("I like to Climb Mountains");
    }
    else
    {
        puts("I like to participate in Tour De Farce");
    }
    printf("%d  %d  %d", x, y, z);
}
