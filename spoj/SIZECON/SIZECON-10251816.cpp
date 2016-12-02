#include <iostream>
using namespace std;
int main(){
	int x,y=0,z;
	cin>>x;
	while(x--)
	{
		cin>>z;
		z>0?y+=z:0;
	}
	cout<<y;
return 0;


}
