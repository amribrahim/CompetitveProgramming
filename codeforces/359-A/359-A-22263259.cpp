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
//int fun(string a,int ind,int s){



//}
bool isok(string numeric){
	if(numeric[0]=='0'&&numeric.size()>1)
		return false;
	if(numeric.size()>7||(numeric.size()==7&& tonum(numeric)>1000000))
		return false;
	
	return true;

}
int main(){
/*	
string all;
cin>>all;
int size=0, no=0,mtot=-1,tot=-1,nums[3]={};


	for(int i=1;i<=(int)all.size()-2;i++){
		cout<<all.size()-2<<endl;
	if(isok(all.substr(0,i))){
		for(int b=i;b<all.size()-1;b++)
		{
			if(isok(all.substr(i,b-i+1))&&isok(all.substr(b+1)))
			{
				tot=tonum(all.substr(0,i))+tonum(all.substr(i,b-i+1))+tonum(all.substr(b+1));
				if(tot>mtot)
					mtot=tot;
			}
		}

	}
}
*/
/*for(i=all.size();i>=0&&tot<3;i--)
{

	if(all[i]=='0'||(size==7&&tonum(all.substr(i+1,size))>1000000))
	{
		nums[tot++]=tonum(all.substr(i+1,size));
		size=0;
		
	}


	size++;
}

if(size>0)
	nums[tot]=tonum(all.substr(i+1,size));

for(int i=0;i<tot;i++)
	cout<<nums[tot]<<endl;*/
//cout<<mtot;

int **all;
int rows,cols;
cin>>rows>>cols;
all=new int*[rows];
bool is2=false;
for(int i=0;i<rows;i++)
	all[i]=new int[cols];
for(int i=0;i<rows;i++)
	for(int j=0;j<cols;j++)
		cin>>all[i][j];

for(int i=1;i<rows-1;i++)
	if(all[i][0]||all[i][cols-1])
		is2=true;
for(int i=1;i<cols-1;i++)
	if(all[0][i])
		is2=true;
for(int i=1;i<cols-1;i++)
	if(all[rows-1][i])
		is2=true;
	
	if(is2)
		cout<<2;
	else
		cout<<4;
	
	
	
	
	
	
	
	
	
	
	//system("pause");
return 0;
}