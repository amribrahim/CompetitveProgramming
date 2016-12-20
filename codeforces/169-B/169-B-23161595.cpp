#include <iostream>
#include <string>
using namespace std;
int main(){
    string f;
    string s;
    int place=-1;
    int last=0;
    cin>>f>>s;
    int secound[10]={0};
    for(int i=0;i<s.size();i++)
{   
    secound[((int)s[i])-((int)'0')]++;
    
}
for(int l=0;l<f.size();l++){
    for(int z=9; z>((int)f[l])-((int)'0');z--)
    {
    if(secound[z]>0){
        secound[z]--;
        f[l]=(char)(z+'0');
        last++;
    }
    
    
    }
    if(last==s.size())
        break;
    }
    cout<<f;
    return 0;
}