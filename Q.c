#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,b,i;
    for(i=0;i<n;i++)
    {
    scanf("%d%d",&a,&b);
    int k,sum = 0;
    for(k=a;k<=b;k++)
    {
      if(k%2!=0)
          sum=sum+k;
    }
    printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
