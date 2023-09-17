#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int c,f,i;
    for(i=0;i<n;i++)
    {
      scanf("%d %d",&c,&f);
      float x,y;
      x=(5*(float)f)/(float)9;
      printf("Case %d: %.2f\n",i+1,c+x);
    }
    return 0;
}
