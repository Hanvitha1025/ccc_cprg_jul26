/* Read the average score from the student and print her result as follows:
0 to 59     Fail
60 to 79    Second class
80 to 94    First class
95 to 100   Excellent
Also check for invalid score
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argumentCount, char *arguments[])
{
    float averageScore = atof(arguments[1]);
    if (averageScore < 95 && averageScore <= 100)
        puts("Result is Excellent");
    else if (averageScore >= 80)
        puts("Result is First Class");
    else if (averageScore >= 60)
        puts("Result is Second Class");
    else if (averageScore >= 0)
        puts("Result is Fail");
    else
        puts("Invalid score enetered");
}
