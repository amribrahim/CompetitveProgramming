#include <iostream>
#include<vector>
#include<iomanip>
#include<cmath>
using namespace std;

int abs(int a){

return (a>0)?a:-a;

}
int main()
{
    long long int n;
    int temp;
    cin >>n;
     long long int nums[11][2]={},zeros=0,sum=0;
    for(int i=0;i<n;i++)
    {
    cin>>temp;
    if(temp==0)
        zeros++;
    else
        nums[abs(temp)][(abs(temp)/temp +1)/2]++;
    }
    for(int i=0;i<11;i++){
    sum+=nums[i][0]*nums[i][1];
    }
    sum+=(zeros*(zeros-1))/2;
    cout<<sum;
    return 0;
}