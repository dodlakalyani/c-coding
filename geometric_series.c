#include <stdio.h>
int main()
{
     int n,six=0,seven=0;
    printf("enter a num: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            seven+=7;
        }
        else
        {
            six+=6;
        }
    }
    if(n%2!=0)
    {
        printf("%dth term of series %d",n,seven-7);
    }
    else
    {
         printf("%dth term of series %d",n,seven-7);
    }
    return 0;
}
