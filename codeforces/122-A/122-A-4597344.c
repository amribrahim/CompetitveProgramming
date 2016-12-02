#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num%4==0 ||num%7==0 || num%74==0 || num%47==0 ||num%474==0||num%447==0 || num%477==0 )
        printf("YES");
    else if(num==774 ||num==744||num==747)
        printf("YES");
    else
        printf("NO");
        return 0;
}