#include <stdio.h>
#include <stdlib.h>
typedef enum{EVEN , ODD}type;
type findtype(int a,int b, int c){
    int coun,even,odd;
    if((a%2==0&&b%2==0)||(a%2==0&&c%2==0)||(c%2==0&&b%2==0))
        return EVEN;
    else 
        return ODD;
}
int findind(type x,const int array[],int elnum){
    int count;
    for(count =0;count<elnum;count++)
    {
    if( (x==EVEN)?array[count]%2==0:array[count]%2!=0)
        break;

    }

    return count+1;



}

int main () {

    
int arr[100],elnum,count;
type arrtype;
scanf("%d",&elnum);
for(count =0;count<elnum;count++)
scanf("%d",&arr[count]);
arrtype=findtype(arr[0],arr[1],arr[2]);
printf("%d",findind(!(arrtype),arr,elnum));
  
    return 0;
}