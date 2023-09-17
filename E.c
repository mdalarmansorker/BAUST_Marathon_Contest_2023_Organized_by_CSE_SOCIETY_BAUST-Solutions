#include <stdio.h>
#include <stdlib.h>
int main()
{
    int kk;
    int t,m,g;
    int sd=0,md=1,dk=1,y,z,x=0,q;
    scanf("%d",&t);
    int i,j;
    char A;
    for(i=0;i<t;i++)
    {
        scanf("%d %d", &m, &g);
        int ar[m];
        for(j=0;j<m;j++)
            scanf("%d",&ar[j]);
        for(j=0;j<g;j++)
        {
            scanf("\n%c",&A);
            if(A=='S')
            {
                 scanf("%d",&sd);
                       for(kk=0;kk<m;kk++)
                         ar[kk]=ar[kk]+sd;
            }
             if(A=='M')
            {
                 scanf("%d",&md);
                 for(kk=0;kk<m;kk++)
                     ar[kk]=ar[kk]*md;
            }
             if(A=='D')
            {
                scanf("%d",&dk);
                for(kk=0;kk<m;kk++)
                    ar[kk]=ar[kk]/dk;
            }
             if(A=='P')
            {
                 scanf("%d %d",&y,&z);
                    int temp=ar[y];
            ar[y]=ar[z];
            ar[z]=temp;
            }
             if(A=='R')
            {
                int b[m],r=m-1;
                for(kk=0;kk<m;kk++)
                {
                    b[kk]=ar[r];
                    r--;
                }
                for(kk=0;kk<m;kk++)
                    ar[kk]=b[kk];
            }
        }
            printf("Case %d:\n",i+1);
            for(j=0;j<m;j++)
            {
                printf("%d",ar[j]);
                if(j<m-1)
                    printf(" ");
            }
            printf("\n");
    }
    return 0;
}
