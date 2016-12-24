#include <iostream>
#include <string>
using namespace std;

int main()
{
long int A=0,D=0,no;
char c;
cin>>no;

for(int i=0;i<no;i++)
{
cin>>c;
if(c=='A')
A++;
else
D++;




}
if(A>D)
cout<<"Anton";
else if (D>A)
cout<<"Danik";
else
cout<<"Friendship";

    return 0;
}