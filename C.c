#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
double   pi=2*acos(0.0);
      int n;
    scanf("%d",&n);
    double r[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%lf",&r[i]);
        double area[n],areas[n];
      int   j=1;
    for(i=0;i<n;i++)
    {
        area[i]=pi*r[i]*r[i];
        areas[i]=4*r[i]*r[i];
        printf("Case %d: %.2lf\n",j,areas[i]-area[i]);
        j++;
    }
    return 0;
}
