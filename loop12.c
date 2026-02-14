#include <cs50.h>
#include <stdio.h>
int main ( )

{
    int n=get_int("Enter n: ");
    int sum=0;
    for( int i=1; i<=n; i++)
    {
        sum=sum+(2*i-1);
    }
    printf("sum of first %d odd number:%d\n",n,sum);
        return 0;
}
