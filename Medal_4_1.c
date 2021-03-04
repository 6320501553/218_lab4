#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][2],i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
            if(j==0)
                a[i][j]=a[i][j]*4;
            else if(j==1)
                a[i][j]=a[i][j]*2;
            else if(j==2)
                a[i][j]=a[i][j]*1;
        }
    }
    int locamax=0,locamin=0,min=2000,max=0,sum=0;
    for(i=0;i<n-2;i++)
    {
        for(j=i; j<i+3; j++)
        {
            sum=sum+a[j][0]+a[j][1]+a[j][2];
        }
        if(max<sum)
        {
            max=sum;
            locamax=i;
        }
        if(min>sum)
        {
            min=sum;
            locamin=i;
        }
        sum=0;
    }
    printf("%d %d\n",locamax+1,locamin+1);

    return 0;
}
