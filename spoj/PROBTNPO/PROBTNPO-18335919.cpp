#include <iostream>
#include<map>
using namespace std;
map<long int,int> nums;
int lenn(long long int a){
if(nums[a]!=0)
    return nums[a];
else
return nums[a]=1+lenn((a%2)==0?(a/2):((a*3)+1));

}
int main()
{
int i,a,b,num1,num2,tot;
nums[1]=1;

while(cin>>a&&!cin.eof()&&cin>>b)
{

tot=0;

num1=min(a,b);
num2=max(a,b);

for(int i=num1;i<=num2;i++)
{
if(lenn(i)>tot)
    tot=lenn(i);
}

cout<<a<<" "<<b<<" "<<tot<<endl;

}


    return 0;
}
