#include <cs50.h>
#include <stdio.h>
int main ( )
{
    int n= get_int("Enter n:");
    int sum=0;
    for(int i=1; i<=n; i++)
    {
          sum=sum+i;
    }
    printf("The sum from 1 to %d is %d\n",n,sum);
    return 0;
}
