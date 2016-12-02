#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,l,m,n,d,undamaged=0,counted,count;

    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
    for(count=1;count<=d;count++){
    if(count%n==0||count%m==0||count%k==0||count%l==0)
        continue;

    else
    undamaged++;  }
      printf("%d",d-undamaged);
    return 0;
}