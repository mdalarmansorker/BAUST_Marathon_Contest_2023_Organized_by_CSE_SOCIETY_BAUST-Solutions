#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int dd1,dd2,mm1,mm2,yyyy1,yyyy2;
    int i,a;
        for(i=0;i<t;i++)
        {
        scanf("%d/%d/%d",&dd2,&mm2,&yyyy2);
        scanf("%d/%d/%d",&dd1,&mm1,&yyyy1);
        if(dd2<dd1)
            mm2=mm2-1;
        if(mm2<mm1)
           yyyy2=yyyy2-1;
           a=yyyy2-yyyy1;
           if(a<0)
            printf("Case #%d: Invalid birth date\n",i+1);
           else if(a>130)
            printf("Case #%d: Check birth date\n",i+1);
           else
            printf("Case #%d: %d\n",i+1,a);
        }
    return 0;
}
