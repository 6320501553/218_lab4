#include<stdio.h>
#include<string.h>
int main()
{
    char cha,n[]=" ";
    scanf("%s",cha);
    int i;
    for(i=0; i<strlen(cha); i++)
    {
        if(cha[i] == n)
        {
            printf("%c",cha[i+1]);
        }
    }
    return 0;
}
