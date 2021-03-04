#include<stdio.h>
#include<string.h>
int main()
{
    char cha[1001],n=" ";
    scanf("%s",cha);
    int i;
    for(i=0; i<strlen(cha); i++)
    {
        if(i==0)
        {
            printf("%c",cha[i]);
        }
        else if(cha[i]==" ")
            printf("%c",cha[i+1]);
    }
    return 0;
}
