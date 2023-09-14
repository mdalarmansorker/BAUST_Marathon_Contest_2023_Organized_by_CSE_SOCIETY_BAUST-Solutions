#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t;
    int i,j;
    int a,b,temp=0,x=0;
    while(n!=0)
    {
        scanf("%d",&t);
        a=t/2;
        b=t-a;
        printf("%d %d\n",a,b);
        n--;
    }
    return 0;
}
