#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {

 int counter,n=0,num;
 long number;
 scanf("%d",&num);

for(counter=0;counter<num;counter++){
scanf("%d",&number);
while(number>0)
 {
 if(n==0)
 {
 n=1;
 }
 else{n=0;}
 if(number%2==0)
 {
 number/=2;
 }
 else if(number%2!=0)
 {
 number--;
 }
 }
if(n==1)
 {
 printf("Aayush\n");
 }
 else{printf("Akash\n");}
 n=0;
}

return 0;
 }
