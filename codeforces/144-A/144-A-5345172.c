#include <stdlib.h>
#include<stdio.h>
#include<string.h>
//#include<stdarg.h>
//#include "MYstack.h"
//void Top(int disks,int A,int B , int C){
//  if(disks!=0){
//  Top(disks-1,A,C,B);
//  printf("%d--->%d\n",disks,B);
//  Top(disks-1,C,B,A);}
//
//}
//void oop(char x){
//printf("value = %c\n",x);
//}
//void vhan(int *x){
//x=(int *)malloc(sizeof(int));
//  *x=34;
//  printf("%d\n",*x);
//}
#define strap(x,y) str(x##y)
#define str(x) #x
typedef int zoro;
int main(int argc , char *argv[])
{
    
    /*Stack string,string2 ;
    intstack(&string);
    intstack(&string2);
        push('g',&string);
        push('n',&string);
        push('i',&string);
        push('r',&string);
        push('t',&string);
        push('s',&string);
    
    
    pop(&a,&string);
    printf("value = %c\n",a);*/
    //
    //Copystack(&string2,&string);
    ////clearstack(&string);
    //printf("size = %d\n",stacksize(&string2));
    //traversestack(&string2,oop);

    //int *iptr=NULL;
    //vhan(iptr);
    //printf("%d\n",*iptr);
    
    //printf("%d\n",*iptr);
    int tallindex,tall,shortindex,shor,num,moves=0,count,curr;
    scanf("%d",&num);
    scanf("%d",&tall);
    shor=tall;
    tallindex=shortindex=0;
    for(count=1;count<num;count++){
        scanf("%d",&curr);
        if(curr>tall){
            tall=curr;
            tallindex=count;
        }
        else if(curr<=shor){
            shor=curr;
            shortindex=count;
        }

    }
//  scanf("%d%d%d",&a,&b,&c);
    moves=tallindex+((num-1)-shortindex);
    if(tallindex>shortindex)
    moves--;
    printf("%d",moves);
    //system("pause");
    return 0;
}