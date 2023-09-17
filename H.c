#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    int Ox,Oy,Ax,Ay,Bx,By,i;
    double o,a,b,O,d,S;
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d %d",&Ox,&Oy,&Ax,&Ay,&Bx,&By);
        o=sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
        a=sqrt((Ox-Bx)*(Ox-Bx)+(Oy-By)*(Oy-By));
        b=a;
        O=acos((a*a+b*b-o*o)/(2*a*b));
        S=a*O;
        printf("Case %d: %lf\n",i+1,S);
    }
    return 0;
}
