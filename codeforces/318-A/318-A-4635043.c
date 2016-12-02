#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
long long int n,k,evlist,oddlist;
scanf("%I64d%I64d",&n,&k);
if((n-1)%2)
	evlist=oddlist=n/2;
else
{
oddlist=(n/2) +1;
evlist=n/2;

}
if(k<=oddlist)
{
k=1+(2*(k-1));
}
else if(k<=evlist+oddlist)
{
	k-=oddlist;
k=2+(2*(k-1));

}
else
{
	k=n;
}

printf("%I64d",k);

//system("Pause");
	return 0;
}