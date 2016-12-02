#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include <queue>
#include<map>
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
	/*
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
		cout<<num1.size()+rem;*/
	
	/*
	bool openers[1001]={0};
	int bottles[1001]={0};
	int a,b,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		bottles[b]=0;
		if(!openers[a])
			bottles[a]++;
		openers[b]=1;
	
	
	
	}
	a=0;
		for(int i=0;i<1001;i++)
			a+=bottles[i];
		cout<<a;
	*/
/*	char board[50][50];
		int n,m;
		pair<int,int>np,mp;
		cin>>m>>n;
		np.first=n;
		np.second=mp.second=0;
		mp.first=m;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
			{
			cin>>board[i][j];
			if(board[i][j]=='*')
			{
				if(i<mp.first)
					mp.first=i;
				if (i>mp.second)
					mp.second=i;
				if(j<np.first)
					np.first=j;
			    if (j>np.second)
					np.second=j;
			
			
			
			}
			}
			for(int i=mp.first;i<=mp.second;i++)
			{	for(int j=np.first;j<=np.second;j++)
					cout<<board[i][j];
				cout<<endl;
			}*/
	/*
	priority_queue<int> a;
	a.push(0);
	int m,n,temp;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		cin>>temp;
		if(a.size()<n && temp<0)
			a.push(temp);
		else if (a.top() > temp)
		{
			a.pop();
			a.push(temp);
		
		}
	
	
	
	}
	m=0;
	while(a.size()!=0)
	{	
		m+= (a.top()*-1);
		a.pop();

	}
	cout<<m;
*/

vector< pair< string,int > > a;

		int n,j;
		string temp;
		cin>>n;
		for(int i=0;i<n;i++)
		{
		cin>>temp;
		for (j=0;j<a.size()&&a[j].first!=temp;j++);
		if(j==a.size())
		{
			a.push_back(pair< string,int >(temp,1));
		cout<<"OK"<<endl;
		}
		else
			cout<<a[j].first<<a[j].second++<<endl;
		
		}



//	system("pause");
		return 0;

}