#include<stdio.h>
void main()
{
    char cha[201];
    int i;
    scanf("%s",cha);
    for(i=0; i<strlen(cha); i++)
    {
        if(i==strlen(cha))
            break;
        else if(cha[i]!=cha[i+1])
        {
            printf("%c",cha[i]);
        }
    }
}
