#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    printf("Before swapping: %d,%d,%d\n",a,b,c);
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    printf("After swapping: %d,%d,%d",a,b,c);
	return 0;
}
