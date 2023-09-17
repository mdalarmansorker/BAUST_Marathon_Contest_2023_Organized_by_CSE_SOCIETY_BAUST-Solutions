#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,v;
    scanf("%d %d",&c,&v);
    int voters;
    int votes[c];
    for(int i=0;i<c;i++)
      votes[i]=0;
    for(int i=0;i<v;i++)
    {
      scanf("%d",&voters);
      votes[voters-1]++;      
    }
    for(int i=0;i<c;i++)
      printf("%.2f%%\n",(float)votes[i]/(float)v*100);
    return 0;
}
