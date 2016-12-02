#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{/*
   int nums[220],sum=0,n,count,n2,i,j,swap;
   scanf("%d",&n);
   n2=2*n-1;
   for(count=0;count<n2;count++){
   scanf("%d",&nums[count]);
   }

   for(i=1;i<n2;i++)
   {

       for(j=0;j<n2-1;j++){


       if(nums[j]<nums[j+1]){

       swap=nums[j];
       nums[j]=nums[j+1];
       nums[j+1]=swap;


       }

       }

   }


   for(count=n2-1;count>=n2-n;count--){


   if(nums[count]>0){

   break;}
   else{
   nums[count]*=-1;

   }

   }

   for(count=0;count<n2;count++){
   sum+=nums[count];
   }
   printf("%d",sum);
  char a[120];
  int ishello=1;
  scanf("%s",a);
int lenofa=strlen(a);
  if(lenofa<5);
  ishello=0;
  int ish=0 , isl=0 , isl2=0 ,count,ise=0,iso=0;
  for(count=0;count<lenofa;count++){
  if(a[count]=='h'){
  ish=1;
  count+=1;
  break;
  }
  }
    for(;count<lenofa;count++){
  if(a[count]=='e'){
  ise=1;
  count+=1;
  break;
  }
  }
      for(;count<lenofa;count++){
  if(a[count]=='l'){
  isl=1;
  count+=1;
  break;
  }
  }
      for(;count<lenofa;count++){
  if(a[count]=='l'){
  isl2=1;
  count+=1;
  break;
  }
  }
      for(;count<lenofa;count++){
  if(a[count]=='o'){
  iso=1;
  count+=1;
  break;
  }
  }
  if( ish==1&& isl==1 && isl2==1 &&ise==1&&iso==1)
  printf("YES");
  else
  printf("NO");

char x[1000000];
scanf("%s",x);
int total=0 , times,count,num;
for(times=0;strlen(x)>1;times++){
    total=0;
for(count=0;x[count]!='\0';count++)
{
    sscanf(&x[count],"%1d",&num);
   //printf("num number %d : %d \n  ",count+1,num);
 total+= num;

}
//printf("%d   ",total);
sprintf(x,"%d",total);
}
printf("%d",times);*/
/*int x;
scanf("%d",&x);
printf("%d",x);*/


char one[120];


scanf("%s",one);
int count,c2=0;
for(count=0;count<strlen(one);count++){

if(one[count]=='H'||one[count]=='Q'||one[count]=='9')
break;



}
if(count==strlen(one))
printf("NO");
else
printf("YES");

    return 0;
}