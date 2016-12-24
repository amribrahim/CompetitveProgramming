#include <iostream>
#include <string>
using namespace std;

int main()
{
long int nums[8],daw=0,dope=0;

cin>>nums[2]>>nums[3]>>nums[5]>>nums[6];
for(;min(nums[5],nums[6])>0 &&nums[2]>0;nums[5]--,nums[6]--,nums[2]--)
{
daw++;

}
for(;nums[3]>0 &&nums[2]>0;nums[5]--,nums[3]--,nums[2]--)
{
dope++;

}
cout<<dope*32+daw*256;
    return 0;
}