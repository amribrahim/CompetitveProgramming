#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<hash_map>
#include<hash_set>
#include<sstream>
#include<cmath>
using namespace std;


int main()
{
int n;
cin>>n;
int a[2]={};
a[0]=n/2;
if(n%2==1)
{a[0]--;
a[1]++;
 }
 cout<<a[0]+a[1]<<endl;
 for(int i=0;i<a[0];i++)
 cout<<2<<' ';
  for(int i=0;i<a[1];i++)
 cout<<3<<' ';

    return 0;
}