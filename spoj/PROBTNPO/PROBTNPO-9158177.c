#include <stdio.h>
#include <stdlib.h>

int main()
{

while(1){
    int num,num2,num3,hold,re,too=1,max, res,tnt=0;
    if(scanf("%d",&num2)==-1)
        break;

    scanf("%d",&num3);
    if (num2>num3){

    hold=num3;
    num3=num2;
    num2=hold;
    tnt=1;
    }
    for(res=num2;res<=num3;res++){
    num=res;
    too=1;
    while(num >1){
    if(num%2==0)
        num/=2;
    else
        num = 3*num +1;

    too++;
    }
    if(res==num2)
    max=too;
    else if (too>max)
    max=too;

    }
    if(tnt==0)
    printf("%d %d %d\n",num2,num3,max);
    else
     printf("%d %d %d\n",num3,num2,max);
}
    return 0;
}
