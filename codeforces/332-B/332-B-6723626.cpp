#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<fstream>
using namespace std;
struct pairs{
    pairs(int f,int s):first(f),secound(s){}
    int first;
    int secound;
};
long long int abs1(long long int i)
{
if (i<0)
    return i*-1;
else return i;
}
int main(){
    int n,k,first=0,last=200001,ptr=0,f2,l2,maxi=200001,j,gf;
    long long int currentsum=0;
    int * arr= new int[200009];
    cin>>n>>k;
    j=n;
    gf=k;
    long long  int sums[200002];
    sums[200001]=-1;
    vector<int> f,l;
//  ifstream g("F:\\All cards\\f.txt",ios::in);
for(int i=0;i<k;i++)
{
    cin>>arr[i];
    currentsum+=arr[i];
}
sums[ptr++]=currentsum;
for(int i=k;i<n;i++)
{
    cin>>arr[i];
    currentsum+=arr[i];
    currentsum-=arr[i-k];
    sums[ptr++]=currentsum;
}
long long int min=0,max=-1,maxo,minch;
for(int i=k;i<ptr;i++){
    if(sums[i-k]>sums[min])
    {
    //  cout<<"I-K:"<<i-k<<' ';
        min=i-k;
    
    }
    if(sums[min]+sums[i]>max)
{
    //cout<<"I:"<<i<<' ';
    maxo=i;
    max=sums[min]+sums[i];
    minch=min;
}

}
cout<<minch+1<<' '<<maxo+1<<endl;
/*
for(int i=0;i<ptr;i++)
{
    
if(sums[i]>sums[first])
{
    if(abs1(ptr-1-i)>=k||abs1(0-i)>=k)
        {
        f.clear();
        first=i;
        f.push_back(i);
    }
}
else if(sums[i]==sums[first])
    f.push_back(i);
}
for(int i=0;i<ptr;i++)
{

if(sums[i]>sums[last])
{
    if(abs1(i-f[0])>=k||abs1(i-f[f.size()-1])>=k)
    {   
        last=i;
    
    }

}

}
for(int i=0;i<ptr;i++)
{

if(sums[i]>sums[last])
{
    if(!(abs1(i-f[0])>=k||abs1(i-f[f.size()-1])>=k))
    {   
        if(sums[i]!=sums[f[0]])
        l.push_back(i);
    
    }

}

}
if(last<first)
{
    n=first;
first=last;
last=n;
}
for(int i=0;i<f.size();i++)
{
if(abs1(f[i]-last)>=k)
        {
            first=f[i];
            break;
        }
}

if(last<first)
{
    n=first;
first=last;
last=n;
}
cout<<endl<<endl;
for(int i=0;i<j-gf;i++)
cout<<i<<' '<<sums[i]<<' ';
cout<<endl<<endl;
cout<<first+1<<' '<<last+1<<endl<<sums[first]<<' '<<sums[last]<<endl<<sums[29]<<' '<<sums[66];*/
//system("pause");

return 0;

    
}