#include <stdio.h>
int main()
{
    char word[10];
    int i,l=0;
    printf("%s",word);
    scanf("%s",word);
    while(word[l]!='\0')
    {
        l++;
    }
    printf("Reversed word:\n ");
    for(i=l-1;i>=0;i--)
    {
        printf("%c",word[i]);
    }
    printf("\n");
    return 0;
}
