#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    double R1,R2,R3;
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&R1,&R2,&R3);
        double a=R1+R2;
        double b=R1+R3;
        double c=R2+R3;
        double A,B,C;
        A=acos((b*b+c*c-a*a)/(2.00*b*c));
        B=acos((a*a+c*c-b*b)/(2.00*a*c));
        C=acos((a*a+b*b-c*c)/(2.00*a*b));
        double s=(a+b+c)*0.5;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        double rr1,rr2,rr3;
        rr1=0.50*C*R1*R1;
        rr2=0.50*B*R2*R2;
        rr3=0.50*A*R3*R3;
        double areac=rr1+rr2+rr3;
        double as=area-areac;
        printf("Case %d: %lf\n",i+1,as);
    }
    return 0;
}
