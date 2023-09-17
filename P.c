#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i,a,b,c,d;
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==b && b==c && c==d)
            printf("square\n");
        else if((a==c && b==d)||(a==b && c==d)||(a==d&&b==c))
            printf("rectangle\n");
        else if(((a+b+c)>d)&&((a+b+d)>c)&&((a+c+d)>b)&&((b+c+d)>a))
          printf("quadrangle\n");
        else
              printf("banana\n");
    }
    return 0;
}
