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

   map< pair<int,int> , int > who ;
   pair<int , int > tempo;
    map< int , int >xs,ys;
    int n;
    cin>>n;
    long long int all=0;


   for(int i=0;i<n;i++)
   {

   cin>>tempo.first>>tempo.second;


   all+=xs[tempo.first];
   all+=ys[tempo.second];
   all-=who[tempo];
    who[tempo]++;
    xs[tempo.first]++;
    ys[tempo.second]++;
   }

cout<<all;
    return 0;
}