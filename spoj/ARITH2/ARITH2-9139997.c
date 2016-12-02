#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d",&m);
    while(m--){
    long int tot=0,num;
    char resign ='+',sign;
    while(resign!='='){
    scanf("%d %c",&num,&sign);
    if(resign=='+')
    tot+=num;
    else if(resign=='-')
    tot-=num;
    else if(resign=='*')
    tot*=num;
    else
    tot/=num;
    resign=sign;
    }
    printf("%d\n",tot);
    }
    return 0;
}