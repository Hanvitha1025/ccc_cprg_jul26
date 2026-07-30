my_first_program.c

#include<stdio.h>
#define MAX_STUDENT_COUNT 60

int main() {
    int user_count = 0;
    // reading the user given student count
    if(user_count <= MAX_STUDENT_COUNT)
         // do something

    puts("I lovce C programming");
}

```

### Explanation of the above code:

int puts(char const\*);

## OPTIONS WITH GCC:

```
gcc my_first_program.c
```

The above code will pre-process, compile (syntax cheking, translation and interpretation) and lastly liking and we get the executable (application/program)
Note: The default executable file a.exe

```
gcc -E my_first_program.c
```

The above will stop after pre-processing. Thus the pre-processed code still human readable.

```
gcc -c p1.c
```

Stop after compilation. Thus we get object code.
Note: Object code is machine specific/dependent.
Thus the above command will generate object file.

---

DAY2 WEDNESDAY 29-07-2026

```
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
```

---

```
int main() {
    int x = 8, y = 13, z = -5;

    if(x++ >= y && --z != y--) {
        puts("I like to Climb Mountains");
    }
    else {
        puts("I like to participate in Tour De Farce");
    }
    printf("%d  %d  %d", x, y, z);
}
```

---

```
int main()
{
    int x = 8, y = 13, z = -5;

    if (x++ != y && --z == y-- & y == z || z-- != x--)
    {
        puts("I like to Climb Mountains");
    }
    else
    {
        puts("I like to participate in Tour De Farce");
    }
    printf("%d  %d  %d", x, y, z);
}
```
