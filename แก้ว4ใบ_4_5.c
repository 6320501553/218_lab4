#include<stdio.h>
int main()
{
    int n,i,j;
    char cha[51];
    scanf("%d",&n);
    if(n<101&&n>0)
    {
        for(i=0; i<n; i++)
        {
            fflush(stdin);
            scanf("%s",cha);
        }
    }
    return 0;
}
