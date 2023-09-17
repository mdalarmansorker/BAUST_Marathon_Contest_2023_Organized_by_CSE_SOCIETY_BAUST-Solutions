#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,i=1;
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        bool triangle = false;
        if((a>b && a>c) && (a*a==b*b+c*c))
          triangle = true;
        else if((b>a && b>c) && (b*b==a*a+c*c))
          triangle = true;
        else
        {
           if(c*c==a*a+b*b)
              triangle = true;
        }
        if(triangle)
          printf("Case %d: yes\n",i);
        else
          printf("Case %d: no\n",i);
        i++;
    }
    return 0;
}
