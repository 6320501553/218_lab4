#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k=n/3;
    int a[n][2],i,j,max[n],sp[k];
    for(i=0; i<n; i++)
    {
        max[i]=0;
        sp[i]=0;
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
            if(j==0)
                a[i][j]=a[i][j]*4;
            else if(j==1)
                a[i][j]=a[i][j]*2;
            else
                a[i][j]=a[i][j]*1;
            max[i]+=a[i][j];
            if(i<3)
            {
                sp[i]+=max[i];
            }
        }
        printf("SP %d\n",sp[i]);
    }

    return 0;
}
