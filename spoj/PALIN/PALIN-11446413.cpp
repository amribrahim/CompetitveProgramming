#include<iostream>
#include<string>
//#include "Bitarray.h"
#include<cstdlib>
using namespace std;
class destroyme{
public:

	~destroyme(){
		std::cout<<"destroyed ~, shiiit~"<<std::endl;


	}

};

class alltype{



	

	void * currp;
};
void i(std::string *f){

	std::cout<<sizeof(f)<<std::endl;


}
bool incrementfrom (char num[],int index){
	int i;
for(i=index;i>=0;i--)
	if(num[i]=='9')
		num[i]='0';
	else{
		num[i]++;
		break;
	}
int returnvalue=(i==0)?true:false;
for(int i=index;num[i]!='\0';i++)
	num[i]='0';

return returnvalue;
}
int main(){
/*	bitarray n(45);
	n.allones();
	std::cout<<std::boolalpha<<n[44]<<'\t';
	std::cout<<n[12]<<std::endl;
	n(44,false);
std::cout<<n[44]<<'\t';
	std::cout<<n[12]<<std::endl;
	*/
	/*
	void *h=new destroyme;
	delete h;
	*/
	int n;
	cin>>n;
	while(n--){
char num [1000009];
num[0]='0';
cin>>(num+1);
int size=0,mid,i,j;
while(num[size++]!='\0');
num[size]='\0';
num[size-1]='0';
	mid=size/2;
bool modified=false;
	while(true){
	for( i=(size%2==0)?mid-1:mid, j=mid;i>=0;i--,j++)
	{
		if (modified==false){
		if(num[i]>num[j])
		{
		num[j]=num[i];
		modified=true;
		}
		else if(num[i]<num[j])
		{
			if(num[mid]!='9'){
			(size%2==0)?num[mid]=++num[mid-1]:num[mid]++;
			i++;
			j--;
			
			}
			else
			{
				if(incrementfrom(num,mid))
				num[--size]='\0';
				
				mid=size/2;
			i=(size%2==0)?mid-1:mid;
			j=mid;
			}
	
		modified=true;
		}
		
		}
		
		
		
		else {
		num[j]=num[i];
		}
	}
	if (modified==false)
	{
	if(num[mid]!='9')
	{
		num[mid]++;

		if(size%2==0)
		num[mid-1]++;
	break;
	}
	else
	{
		if(incrementfrom(num,mid))
		num[--size]='\0';
		mid=size/2;
		modified=true;
	}
	}
	else
	break;
	}
	if(num[size-1]=='0')
		num[size-1]='\0';
	char *k;
	(num[0]=='0')?k=num+1:k=num;
cout<<k<<endl;

}
//system("pause");
	return 0;
}