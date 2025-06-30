#include <stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Value:%d\n",a);
    printf("Address:%d\n",&a);
    printf("Value of p:%p\n",p);
    printf("Address of p:%p\n",*p);
    return 0;
}

//pointer with array
#include <stdio.h>
int main()
{
    int a[]={10,20,30};
    int *p=a;
    printf("%d\n",*p);
    printf("%d\n",*p+1);
    printf("%d\n",*p+2);
    printf("%d\n",*p+3);
    return 0;
}
