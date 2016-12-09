#include <iostream>
#include<string>
#include<iomanip>
#include<vector>
int nums[4];
using namespace std;

int main()
{
   string strn;
   string res[4]={"4","7"};
   char prev='m';
   int maxi=0;
   cin>>strn;
for(int i=0;i<strn.size();i++){

if(strn[i]=='4')
    nums[0]++;
else if(strn[i]=='7')
nums[1]++;
}
for(int i=0;i<2;i++)
{    if(nums[i]>nums[maxi])
        maxi=i;
       // cout<<"A"<<nums[i]<<endl;
}
if(nums[maxi]==0)
cout<<-1;
else
cout<<res[maxi];

    return 0;
}