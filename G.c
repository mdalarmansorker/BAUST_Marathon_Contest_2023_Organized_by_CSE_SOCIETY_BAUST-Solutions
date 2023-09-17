#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i, j,k,l;
    for(i=0;i<t;i++)
    {
        int n,p,q;
        scanf("%d %d%d",&n,&p,&q);
        int egg[n];
        for(j=0;j<n;j++)
            scanf("%d",&egg[j]);
        int  ms=0;
       int o;
       int pp=n;
       int ppp=0;
       for(o=0;o<pp;o++)
       {
           ms=ms+egg[o];
               if(ms<=q)
               ppp++;
           }
    if(ppp>p)
        ppp=p;
       printf("Case %d: %d\n",i+1,ppp);
    }
    return 0;
}
