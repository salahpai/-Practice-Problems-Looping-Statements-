#include <cs50.h>
#include <stdio.h>
int main ( )
{
    int n=get_int("Enter the number of n: ");
    int count=0;
    for (int i=1; i<=n; i++)
    {
     if(i%5==0)
     {
        count++;
     }
    }
    printf("the total numbers divisible by 5 from 1 to %d is %d\n",n,count);
    return 0;

}
