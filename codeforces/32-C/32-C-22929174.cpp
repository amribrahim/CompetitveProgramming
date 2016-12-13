#include <iostream>

using namespace std;
int main()
{
int n , m ,s;
cin>>n>>m>>s;
long long int jpsrow =( (n-1)/s +1) * (1+ (n-1)%s);
long long int jpscol =( (m-1)/s +1) * (1+ (m-1)%s);
cout<<jpsrow*jpscol;

    return 0;
}