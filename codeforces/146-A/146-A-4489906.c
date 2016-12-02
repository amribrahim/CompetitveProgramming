#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[55];
    int nu,nu1=0,nu2=0,count,*ptrf=&nu1;
    scanf("%d%s",&nu,num);
    for(count=0;count<nu;count++){
    if(num[count]=='7'||num[count]=='4')
        *ptrf+=num[count]-48;

    else
     break;

     if(count==(nu/2-1))
        ptrf=&nu2;
    //printf("%d  %d\n",nu1,nu2);
    }
    if(count==nu&&nu2==nu1)
    printf("YES");
    else
    printf("NO");

    return 0;
}