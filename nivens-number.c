/*niven number(or)harshd number*/
#include<stdio.h>
int main()
{
    int r,n=156,s=0,temp=0;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        s+=r;
        temp=temp/10;
    }
    if(n%s==0)
    {
        printf("%d is niven num",n);
    }
    else
    {
        printf("%d is not niven num",n);
    }
    return 0;
}

