#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
7azzy elnahar dah zy el 5ara ://
int strnind(char const *st1,char const *st2){
int count1,count2,count3;
int len2=strlen(st2);
int len1=strlen(st1);

for(count1=0;count1<=len1-len2;count1++){
for(count2=0,count3=count1;count2<len2;count2++,count3++){
if(st1[count3]!=st2[count2])
break;
}
if(count2==len2)
return count1;
}
return -1;
}
void strntk(char const *st1,char const *st2){
int accss[100],count,zn;

for(count=0;st1[count]!='\0';count++){
zn=strnind( st1+count, st2);
if(zn==0)
{
printf("\n");

count+=strlen(st2)-1;
}
else
printf("%c",st1[count]);

}


}*/


/*int change(int num){

char temp[15];
int newnum,count,count2;
sprintf(temp,"%d",num);
char temp2[15];//I chose simplicity over complexity , instead of a reallocation of the array and using the memcpy , i simply created another array
for(count=0,count2=0;temp[count]!='\0';count++)
{
    if(temp[count]=='0')
    continue;
    else
    temp2[count2++]=temp[count];
}
temp2[count2]='\0';

sscanf(temp2,"%d",&newnum);
return newnum;
}*/





int main()
{
    //char x[100],y[100];
  /*  gets(x);
    gets(y);
   printf("%d",sizeof(x));
*/
/*int num1,num2;
scanf("%d%d",&num1,&num2);
if(change(num1+num2)==change(num1)+change(num2))
printf("YES");
else
printf("NO");
*/
char x[102],stf[102];
scanf("%s%s",x,stf);
int co;
for(co=0;x[co]!='\0';co++)
{
    x[co]=tolower(x[co]);

    stf[co]=tolower(stf[co]);
}
printf("%d",strcmp(x,stf));

    return 0;
}