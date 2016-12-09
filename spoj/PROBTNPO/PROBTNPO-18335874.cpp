#include <iostream>
#include<climits>
#define MNUM 3000
using namespace std;
int nums[MNUM];
int lenn(long long int a){
int j=0;
while(a>=MNUM){

(a%2)==0?(a=a/2):(a=(a*3)+1);
j++;
}

if(nums[a]!=0)
    return j+nums[a];
else
return j+(nums[a]=1+lenn((a%2)==0?(a/2):((a*3)+1)));

}
int main()
{
long int i,a,b,num1,num2,tot,z;

nums[1]=1;
while(cin>>a&&!cin.eof()&&cin>>b)
{

tot=0;

num1=min(a,b);
num2=max(a,b);

for(int i=num1;i<=num2;i++)
{
z=lenn(i);
if(z>tot)
    tot=z;
}

cout<<a<<" "<<b<<" "<<tot<<endl;

}


    return 0;
}

