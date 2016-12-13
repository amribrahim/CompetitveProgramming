#include <iostream>
#define maxpos(i,s) ( (i-1)/s +1) * (1+ (i-1)%s)
#define LL(i) (long long int) i
using namespace std;
int main()
{
int n , m ,s;
cin>>n>>m>>s;

cout<<LL(maxpos(n,s)*maxpos(m,s));

    return 0;
}