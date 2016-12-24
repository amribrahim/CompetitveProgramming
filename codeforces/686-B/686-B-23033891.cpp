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
	int n,temp;
	char sign;
	bool swap=1;
	int list[100];
	vector< pair<int,int> > swaps;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>list[i];

	for(int i=0;i<n-1 &&swap!=0;i++)
	{
		swap =0;
			for(int j=0;j<n-i-1;j++)
			{
			if(list[j]>list[j+1])
			{
			swap=1;
			swaps.push_back(pair<int,int>(j+1,j+2));
			temp=list[j];
			list[j]=list[j+1];
			list[j+1]=temp;
			}
				
			}


	

	}


	for(int i=0;i<swaps.size();i++)
		cout<<swaps[i].first<<' '<<swaps[i].second<<endl;

		
	return 0;
}