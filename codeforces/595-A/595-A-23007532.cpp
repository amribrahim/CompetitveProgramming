#include <iostream>
#define maxpos(i,s) ( (i-1)/s +1) * (1+ (i-1)%s)
#define LL(i) (long long int) i
using namespace std;
int main()
{
int n , m ,wina=0,winb=0,tot=0;
cin>>n>>m;
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        {
            cin>>wina>>winb;
            if(wina+winb>0)
                tot++;




          
        }
    cout<<tot;
    return 0;
}