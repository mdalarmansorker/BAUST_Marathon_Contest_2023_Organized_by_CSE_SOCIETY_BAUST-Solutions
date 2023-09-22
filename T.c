#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c;
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
      
        if(a>b && a>c && a<(b+c))
            printf("OK\n");
        else if(b>a && b>c && b<(a+c))
            printf("OK\n");
        else if(c>a && c>b && c<(a+b))
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
