#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;
void init(long long int number,string& num){
	stringstream temp;
	temp<<number;
	temp>>num;
}
bool has1d(long long int number,string &num)
{
	string num2;
	init(number,num2);
	for(int x=0;x<num.size();x++)
		for(int y=0;y<num2.size();y++)
			if(num[x]==num2[y])
				return true;
	return false;
}
int main(){
	//while(true){
	long long int number,count,num;
	int numbers=0;
	cin>>number;
	string numberd;
	init(number,numberd);
	num=sqrt(number);
	for(count=1;count<=num;count++){
	
		if(number%count==0)
		{
			//cout<<count<<endl;
			if(has1d(count,numberd))
				numbers++;
				
			if(has1d(number/count,numberd))
				numbers++;
		

		}
	}
		if(num==sqrt(number)){
		if(has1d(num,numberd))
			numbers--;
		}
		else if(number==1)
			numbers=1;
		cout<<numbers;




	//}
	

	//system("pause");






	return 0;
}