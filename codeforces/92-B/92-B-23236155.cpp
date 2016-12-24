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

int carry=0,ops=0;
string numb;
cin>>numb;
for(int i=numb.size()-1;i>=0 ;i--)
{
if(carry==1)
{
if(numb[i]=='1')
numb[i]='0';
else
{numb[i]='1';
carry=0;
}
}
if(numb[i]=='1'&&carry==0&&i==0)
break;
if(numb[i]=='1')
{
carry=1;
ops++;

}

ops++;

}
cout<<ops;
}