#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<hash_map>
#include<hash_set>
#include<sstream>
#include<cmath>
using namespace std;

int main()
{
int n,R=0,D=0,tbdr=0,tbdd=0;
char se[200001];
   cin>>n;
    for(int i=0;i<n;i++)
   cin>>se[i];
  while(1){

   for(int i=0;i<n;i++)
   {
   if(se[i]=='R')
    {
        if(tbdr>0)
        {
           tbdr--;
            se[i]='0';
        }
        else
        {
            R++;
            tbdd++;

        }

    }
   else if(se[i]=='D')
   {

    if(tbdd>0)
        {
           tbdd--;
            se[i]='0';
        }
        else
        {
            D++;
              tbdr++;
        }
   }


   }

if(D<=0 || R<=0)
        break;

   R=D=0;

}
cout<< ((R<=0)?'D':'R');
    return 0;
}