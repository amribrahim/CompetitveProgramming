#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

bool issuit(int *num,int n){

 if(num[7]>0)
    return 0;
 if(num[5]>0)
    return 0;
if (num[1]!=(n/3) )
 if(num[2]+num[3]!=num[1]||num[4]+num[6]!=num[1])
    return 0;
 if(num[3]-num[6]+num[2] != num[4] )
    return 0;
if(num[2]<num[4])
    return 0;
return 1;

}
int main()
{
    int n,temp;
    cin >>n;
    int nums[8]={};
    for(int i=0;i<n;i++)
      {
       cin>>temp;
       nums[temp]++;
      }
   if(!issuit(nums,n))
    {
    cout<<-1;
    return 0;

    }
    for (int i=0;i<n/3;i++){
    if(nums[6]!=0)
    { temp=6;
        nums[6]--;
    }
    else{
    temp=4;
    nums[4]--;
    }
    cout<<1<<" ";
    if(temp==6&&nums[3]!=0){
    cout<<3<<" ";
    nums[3]--;
    }
    else{
    cout<<2<<" ";
    nums[2]--;
    }
    cout<<temp<<endl;

    }
    return 0;
}