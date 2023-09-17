#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i,j,s=0;
    int N,d,sum[100];
    for(i=0;i<t;i++)
    {
        s=0;
        sum[0]=0;
        scanf("%d",&N);
        char a[14];
        char b[14]="donate";
        int l=0;
        for(j=0;j<N;j++)
            {
                scanf("%s",a);
                if(strcmp(a,b)==0)
                {
                     scanf("%d",&d);
                     s=s+d;
                }
                else
                {
                    sum[l]=s;
                    l++;
                }
            }
            printf("Case %d:\n",i+1);
            for(j=0;j<l;j++)
                printf("%d\n",sum[j]);
    }
    return 0;
}
