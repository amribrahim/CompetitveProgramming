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
 int num[1001];
int main()
{

    int bef=0,pairs=0,sigs=0,sq,tmp,i;
    cin>>sq;
    for( i=0;i<sq;i++){
    cin>>tmp;
    num[tmp]++;
    }
    for( i=0;i<1001;i++)
    {

    if(num[i])
    {
        sigs=num[i];
        break;

    }

    }
    i++;
    for(;i<1001;i++)
    {

    if(num[i])
    {
    //cout<<" I IS "<<i<<" "<<bef<<sigs<<pairs<<endl;
        if(num[i]>pairs+sigs)
        {
        bef+=pairs+sigs;
        tmp=pairs+sigs;
        sigs=num[i]-tmp;
        pairs=tmp;
        }
        else
        {
            if(num[i]>pairs)
            {
            tmp= num[i]-pairs;
            pairs+=tmp;
            sigs-=tmp;
            bef+=pairs;

            }
            else{

            bef+=num[i];

            }

        }

    }

    }

    cout<<bef;



    return 0;
}