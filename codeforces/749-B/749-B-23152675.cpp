#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<hash_map>
#include<hash_set>
#include<sstream>
#include<cmath>
using namespace std;
pair<int,int>  funofp(pair<int,int> pointa,pair<int,int> pointb,pair<int,int> pointc)
{
pair<int,int> pointd;
pointd.first=(pointa.first-pointb.first) *-1  + pointc.first;

pointd.second=(pointa.second-pointb.second) *-1  + pointc.second;

return pointd;

}
int main()
{
pair<int,int> points[3];
pair<int,int> pointsnew[3];
cin>>points[0].first>>points[0].second;
cin>>points[1].first>>points[1].second;
cin>>points[2].first>>points[2].second;

pointsnew[0]=funofp(points[0],points[1],points[2]);
pointsnew[1]=funofp(points[1],points[0],points[2]);
pointsnew[2]=funofp(points[2],points[0],points[1]);
cout<<3<<endl;
for(int i=0;i<3;i++)
cout<<pointsnew[i].first<<' '<<pointsnew[i].second<<endl;
    return 0;
}