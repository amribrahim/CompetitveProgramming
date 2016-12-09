#include <iostream>
#include<string>
#include<iomanip>
#include<vector>
int nums[4];
using namespace std;
void classify(char prev, char curr){
if(curr=='7')
{
if(prev=='4')
    nums[1]++;
nums[2]++;
}
else if(curr=='4')
{
if(prev=='7')
    nums[3]++;
nums[0]++;

}

}
int main()
{
   string strn;
   string res[4]={"4","47","7","74"};
   char prev='m';
   int maxi=0;
   cin>>strn;
    classify(prev,strn[0]);
    prev=strn[0];
for(int i=1;i<strn.size();i++){

  classify( prev ,strn[i]);

    prev=strn[i];

}
for(int i=0;i<4;i++)
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