#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stones,simon,antisimon,n=1,count,l=0;
    scanf("%d%d%d",&simon,&antisimon,&stones);
    while(l==0){
    if(n==1){

      for(count=100;count>0;count--){
    if(simon%count==0&&stones%count==0){
    if(stones-count<0){
        l=1;

        break;}
    stones-=count;

    n=0;
    break;}}}
    else if(l==0){

    for(count=100;count>0;count--){
    if(antisimon%count==0&&stones%count==0){
    if(stones-count<0){
    l=1;

    break;}
    stones-=count;

    n=1;
    break;}}}
    }

    if(n==1){printf("1");}
    else
    printf("0");



        return 0;
}