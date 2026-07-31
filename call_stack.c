#include <stdio.h>

int college_strength = 8500;

void siemReap()
{
    puts("I came to visit the impossible to believe temples of Angkor Watt");
}

void yogyakarta(char *ptr)
{
    puts("I came to see the magnificent temples and the Incredible carvings of Raamayana");
    siemReap(); // 1101
    puts("I came back to visit Prambanan temple");
}

void singapore()
{
    static double d = 10.2;
    puts("We came to enjoy the Universal Studios");
    yogyakarta("hello"); // 7301
    puts("I came back to enjoy the worlds famous food at the Ship restaurant on top twin buildings");
}

int main()
{
    float num = 5.5; // implicit down cast from double to float
    puts("I am at home");
    singapore(); // 5501
    puts("I am back home");
}
