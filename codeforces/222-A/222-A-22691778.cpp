#include <iostream>

using namespace std;

int main()
{
    bool eq=true;
    int n,k,standard,stndlen=1;
        int *a;
    cin>>n>>k;
    a=new int[n];
    cin>>a[0];
    standard=a[0];
for(int i=1;i<n;i++)
{

    cin>>a[i];
    if(a[i]!=standard)
        {
        standard=a[i];
        stndlen=1;


        }
    else
        stndlen++;


}
if(stndlen>=n-k+1)
cout<<n-stndlen;
else
cout<<-1;

    return 0;
}