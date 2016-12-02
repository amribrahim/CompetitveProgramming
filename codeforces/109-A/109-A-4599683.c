#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int number,count,numtemp,num7,num4;
	char sol[1000007]="";
	scanf("%d",&number);
	//printf("%d",number);
	num7=number/7;
	numtemp=number-num7*7;
	while(numtemp%4!=0&&num7>0)
	{
		numtemp+=7;
		num7-=1;



	}
	
		num4=numtemp/4;
		numtemp-=num4*4;
	for(count=0;count<num4;count++){
		sol[count]='4';


	}

	for(count=num4;count<num4+num7;count++){
		sol[count]='7';


	}

	sol[count]='\0';
	if(numtemp==0)
		printf("%s\n",sol);
	else
		printf("-1");
	//system("Pause");//I AM JM
	return 0;
}