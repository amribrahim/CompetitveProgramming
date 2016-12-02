#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(char num[],int rep);
int convert (char num[]);
int main()
{
char num1[150];
char num2[150];
char num3[150];
int num_1, num_2,num_3,test,count;
scanf("%d",&count);

for(;count>0;count--){
scanf("%s + %s = %s",num1,num2,num3);


if(check(num1,1)==1){test=1;}
if(check(num2,2)==2){test=2;}
if(check(num3,3)==3){test=3;}
if(test==1){
num_2=convert(num2);
num_3=convert(num3);
num_1=num_3-num_2;
printf("%d + %d = %d\n",num_1,num_2,num_3);}
if(test==2){
num_1=convert(num1);
num_3=convert(num3);
num_2=num_3-num_1;
printf("%d + %d = %d\n",num_1,num_2,num_3);}
if(test==3){
num_1=convert(num1);
num_2=convert(num2);
num_3=num_2+num_1;
printf("%d + %d = %d\n",num_1,num_2,num_3);}
}
return 0;
}
int check(char num[], int rep){
int count;
for(count=0;num[count]!='\0';count++){
if(num[count]=='m'){  return rep; }
}
return 0;
}
int convert(char num[]){
int count,count2,num1=0,numarr,z=1;
for(count=0;num[count]!='\0';count++){}
for(count2=count-1;count2>=0;count2--){
numarr=num[count2]-48;
num1+=numarr*z;
z*=10;
}
return num1;
}
