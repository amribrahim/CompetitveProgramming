#include <iostream>

using namespace std;

int main()
{



    string sizeable,news;
    cin>>sizeable;
    int prevsize=0,crsize=1;
    bool flag;
    for(int i=0;i<sizeable.size();i++){
    flag=true;
    if(sizeable[i]==sizeable[i-1])
    {
    crsize++;
    }
    else{
    prevsize=crsize;
     crsize=1;
    }
  //  cout<<i<<" "<<sizeable[i]<<" "<<crsize<<" "<<prevsize<<endl;
    if(crsize>2)
    {

    crsize--;
flag=false;

    }
    if(crsize==2&&prevsize==2)
    {

    crsize--;
flag=false;
    }
    if(flag)
        news.push_back(sizeable[i]);
//    cout<<i<<" "<<sizeable[i]<<" "<<crsize<<" "<<prevsize<<endl;

    }
    cout<<news;
    return 0;
}