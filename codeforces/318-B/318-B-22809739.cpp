#include <iostream>
#include<string>
#include<iomanip>
#include<vector>
int nums[4];
using namespace std;

int main()
{
    long long int heavy=0,hm=0;
    string a;
    cin>>a;
    int switcher=-1,k;
    string strs[2]={"heavy","metal"};
    for(int i=0;i<a.size();i++){
    if(switcher==-1){
    for(int j=0;j<2;j++)
            if(a[i]==strs[j][0])
                switcher=j;
    }
    else{
    for(k=1;i<a.size()&&k<strs[switcher].size()&&strs[switcher][k]==a[i];i++,k++);
        if(k==strs[switcher].size())
        {
            if(switcher==0)
            heavy++;
            else
            hm+=heavy;

        }

            i--;

    switcher=-1;
    }

    }
    cout<<hm;
    return 0;
}