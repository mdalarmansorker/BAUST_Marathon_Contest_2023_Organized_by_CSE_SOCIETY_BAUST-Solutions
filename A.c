#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i],&b[i]);
        int j=1;
    for(i=0;i<n;i++)
    {
        printf("Case %d: %d\n",j,a[i]+b[i]);
        j++;
    }
    return 0;
}
