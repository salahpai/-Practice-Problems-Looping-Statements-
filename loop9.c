#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter a non-negative integer: ");
    long factorial = 1;

    for (int i = 1; i <= n; i++)  
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is %ld\n", n, factorial);
}
