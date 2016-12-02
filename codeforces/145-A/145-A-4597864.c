#include<stdio.h>
#include<stdlib.h>

int main(){
    char stra[100005],strb[100005];
    int a4=0,a7=0,count,moves;
    scanf("%s%s",stra,strb);
    
    for(count=0;stra[count]!='\0';count++){
        if(stra[count]!=strb[count])
            if(stra[count]=='4')
                a4++;
            else
                a7++;
    }
printf("%d",(a7>a4)?a7:a4);
    return 0;
}