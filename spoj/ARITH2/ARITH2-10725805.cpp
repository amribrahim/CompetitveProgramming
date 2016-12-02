#include<iostream>
#include<string>
using namespace std;
int main(){
		 int n;
	char op,revop='+';
	cin>>n;
for (int i=1;i<=n;i++)
{
 long long int total=0,num=1;
	char op,revop='+';
	do
	{
		cin>>num>>op;
		if(revop=='+'){
		total+=num;
	}
		else if (revop=='/')
	{
		total/=num;
	}
		else if (revop=='*')
	{
		total*=num;
	}
		else if(revop=='-')
	{
		total-=num;
	}
	revop=op;
	} while (revop!='=');
cout<<total<<endl;
}
	

//	system("Pause");



	return 0;
}