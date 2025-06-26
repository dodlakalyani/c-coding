#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    while(b!=0)
    {
        int carry=a&b;
        a=a^b;
        b=carry<<1;
    }
    printf("Sum:%d",a);
	return 0;
}
