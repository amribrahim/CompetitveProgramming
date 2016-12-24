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

int main()
{
    int c1,c2,i;
   cin>>c1>>c2;
   for( i=0;c1>0&&c2>0;i++)
   {
   if(c1==1&&c2==1)
        break;
   if(c1>c2){
   c1-=2;
   c2++;
   }
   else
   {
       1;
   c2-=2;
   c1++;
   }
  

   }
   cout<<i;
    return 0;
}