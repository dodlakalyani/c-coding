#include <stdio.h>
int main()
{
    int N=10;
    int sale;
    int k=5;
    scanf("%d",&sale);
    if(sale<=k)
    {
        printf("no.of candies sold:%d\n",sale);
        printf("no.of candies left:%d",(N-sale));
    }
    else
    {
        printf("Invalid input\n");
        printf("No.of candies left: %d",N);
    }
    return 0;
}
