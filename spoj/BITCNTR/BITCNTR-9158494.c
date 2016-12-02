#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop;
    scanf("%d",&loop);
    while(loop--){
    int num,tot=0;
    scanf("%d",&num);
    while (num){

   if(num%2==1)
   tot++;
    num/=2;


    }
    printf("%d\n",tot);
    }
    return 0;
}
