#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<hash_set>
#include<hash_set>
#include<sstream>
#include<cmath>
using namespace std;
int main(){
int m,s,cnt=9,sm=0;
int nums[10]={};
string minm,mxim;
cin>>m>>s;
if( ceil(s/9.0) >m){

cout<<-1<<" "<<-1;
return 0;
}
if(s==0)
{
if(m==1)
cout<<0<<" "<<0;
else
cout<<-1<<" "<<-1;
return 0;
}
for(int i=9;i>=1;i--)
{
nums[i]=s/i;
s%=i;
}

for(int i=9;i>0;i--)
{

for(int ml=0;ml<nums[i];ml++)
{
minm.push_back(('1'-1)+i);

}

sm+=nums[i];
}

for(int i=sm;i<m;i++)
{
minm.push_back('0');
}
mxim=minm;
reverse(minm.begin(),minm.end());
if(minm[0]=='0')
{
minm[0]='1';
for(int i=1;i<minm.size();i++)
{
if(minm[i]>'0')
{
minm[i]--;
break;
}

}


}
cout<<minm<<" "<<mxim;

}