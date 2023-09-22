#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int n, i, j, m=0, s=0, l=0;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int h[n];
        for(j=0;j<n;j++)
            scanf("%d",&h[j]);
        for(j=1;j<n;j++)
        {
            l=h[j]-h[j-1];
            if(l>0)
                {
                    m=m+1;
                }
            else if(l<0)
            {
                s=s+1;
            }
        }
        printf("Case %d: %d %d\n",i,m,s);
        m=0;
        s=0;
    }
    return 0;
}
