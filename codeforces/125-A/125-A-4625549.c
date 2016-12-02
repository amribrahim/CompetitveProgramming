#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int cm,ft,inches;
scanf("%d",&cm);
inches=cm/3;
if(cm%3>1)
    inches++;
ft=inches/12;
inches=inches%12;

printf("%d %d",ft,inches);
//  system("Pause");
    return 0;
}