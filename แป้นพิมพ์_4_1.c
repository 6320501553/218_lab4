#include<stdio.h>
int main()
{
    char cha[201];
    int i;
    scanf("%s",cha);
    for(i=0; i<strlen(cha); i++)
    {
        if(cha[i]!=cha[i+1])
        {
            printf("%c",cha[i]);
        }
    }
    return 0;
}
