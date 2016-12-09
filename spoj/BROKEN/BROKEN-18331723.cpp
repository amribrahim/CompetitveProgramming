#include <iostream>

using namespace std;

int main()
{
    int chars[128]={},n=1,max=0,start=0,curr=0,bag=0;
    string line;
    while(1){
    max=start=curr=bag=0;
    for(int i=0;i<128;i++)
        chars[i]=0;
    cin>>n;
    if(n==0)
        return 0;
    cin.ignore();
    getline(cin,line);
    for(int i=0;i<line.size();i++){
    chars[(int)line[i]]++;

    if(chars[(int)line[i]]==1)
        curr++;
    bag++;
    while(curr>n)
    {
    if(--chars[(int)line[start++]]==0)
        curr--;
      bag--;
    }
    if(bag>max)
        max=bag;

    }
    cout <<max<< endl;
    }
    return 0;
}