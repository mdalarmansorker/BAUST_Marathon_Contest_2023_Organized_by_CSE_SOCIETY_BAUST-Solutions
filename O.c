#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n;
    scanf("%d",&n);
    if(n>3)
    {
        if(n%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
        printf("NO\n");
    return 0;
}
