#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int count = 0;

    while (count < 10)
    {

        printf("Count is: %i\n", count++);
    }
    printf("Factorial 3: %i\n", factorial(3));

    return 0;
}
