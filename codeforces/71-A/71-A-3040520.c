#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m[100];
    int count,count2;
    scanf("%d",&count2);
    for(;count2>0;count2--){
    scanf("%s",m);
    for(count=0;m[count]!='\0';count++){}
    if(count>10){
    printf("%c",m[0]);
    printf("%d",count-2);
    printf("%c\n",m[count-1]);
    }
    else
    printf("%s\n",m);
    }
    return 0;
}