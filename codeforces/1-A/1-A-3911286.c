#include <stdio.h>
#include <stdlib.h>
typedef enum {FALSE,TRUE} bool;
bool containrem(int x,int y){
if(x/y==(double)x/y)
return FALSE;
else return TRUE;
}
int main()
{
    int n,m,a,numn,numm;
  long long int tot;
    scanf("%d%d%d",&n,&m,&a);
    numn=n/a;
    if(containrem(n,a))
        numn+=1;
    numm=m/a;
    if(containrem(m,a))
        numm+=1;
    tot=( long long int) numm*numn;
    printf("%lld",tot);
    return 0;
}