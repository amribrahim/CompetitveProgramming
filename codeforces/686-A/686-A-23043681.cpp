#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<iomanip>
#include<sstream>
#include<cmath>
#include<math.h>
using namespace std;

int main(){
long long	int x,n,bag;
	char sign;
long long	int ditsr=0;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>sign>>bag;
		if(sign=='+')
			x+=bag;
		else{
		if(x>=bag)
			x-=bag;
		else
			ditsr++;
		
		}

	
	
	
	
	}

	cout<<x<<' '<<ditsr;




//	system("pause");
	return 0;
}