#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int N, K, P, i;
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&N,&K,&P);
        
        for(i=1;i<=P;i++)
        {
            K++;
            if(N<K)
              K=1;
        }
        printf("Case %d: %d\n",i,K);
    }
    return 0;
}
