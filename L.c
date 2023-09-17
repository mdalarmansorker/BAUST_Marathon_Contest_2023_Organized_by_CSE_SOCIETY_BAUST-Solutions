#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
      int a,b,c;
      a=n/3;
      if(a%3==0)
      {
        a=a-1;
        b=a+2;
        c=n-a-b;
        if(c%3==0)
        {
            c=c-1;
            b=b+1;
        }
      }
      else
      {
        b=a;
        c=n-a-b;
        if(c%3==0)
        {
          c=c-1;
          b=b+1;
          if(b%3==0)
          {
            b=b+1;
            a=a-1;
          }
        }

      }
    printf("%d %d %d\n",a,b,c);
    }
}
