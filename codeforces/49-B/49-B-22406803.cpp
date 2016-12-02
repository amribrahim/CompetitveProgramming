#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;
long int tonum(string numeric){
	long int a;
	istringstream num(numeric);
	num>>a;
return a;
}
long int toint(char a){


return a-'0';
}
int main(){
	string num1,num2,result;
	char maxnum='0';
	int base;
	int rem=0;
	cin>>num1>>num2;
	for(int i=0;i<num1.size();i++)
{		if(num1[i]>maxnum)
			maxnum=num1[i];
}
	for(int i=0;i<num2.size();i++)
	{	if(num2[i]>maxnum)
			maxnum=num2[i];
	}
	base=maxnum-'0'+1;
	//cout<<base;
	if(num1.size()<num2.size())
	{
		string temp=num1;
		num1=num2;
		num2=temp;
	}
	while(num2.size()!=num1.size())
		num2='0'+num2;
	for(int i=num1.size()-1;i>=0;i--)
	{
		int noo=toint(num1[i])+toint(num2[i]);
		if(noo+rem<base)
				rem=0;
		else
			rem=1;
	
	
	}
		cout<<num1.size()+rem;
	//	system("pause");



return 0;


}