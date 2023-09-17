#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double pi=2*acos(0.0);
    int n;
    scanf("%d",&n);
    int r1,r2;
    double h,p;
        int i,j=1;
    double v,R;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %lf %lf",&r1,&r2,&h,&p);
        R= r2 +(r1-r2)*(p/h);
        v = (1/3.0)*pi*( R*R+r2*r2+R*r2)*p;
        printf("Case %d: %lf\n",i+1,v);
    }
    return 0;
}
