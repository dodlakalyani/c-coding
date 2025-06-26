#include <stdio.h>
int main()
{
    char text[100];
    int i=0,start,end,j;
    printf("enter text: ");
    scanf("%[^\n]",text);
    while(text[i]!='\0')
    {
        while(text[i]==' ')
        {
            printf(" ");
            i++;
        }
        start=i;
        while(text[i]!=' ' && text[i]!='\0')
        {
            i++;
        }
        end=i-1;
        for(j=end;j>=start;j--)
        {
            printf("%c",text[j]);
        }
    }
    return 0;
}


