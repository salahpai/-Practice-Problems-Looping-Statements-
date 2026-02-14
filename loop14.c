#include <cs50.h>
#include <stdio.h>
int main ( )
{
    int n=get_int("Enter n: ");
    int count=0;
    if (n==0)
    {
        count=1;
    }else
    {
        if(n<0)
        {
           n=-n;
        }
       while (n>0)
       {
        n=n/10;
        count++;
       }
    }
    printf("total digits= %d\n",count);
}
