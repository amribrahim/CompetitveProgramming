#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int retrem(int num,int size){
    int re=10%num,i;
//  cout<<re<<endl;
    for(i=2;i<size;i*=2){
    re=(re*re)%num;
    }
    i/=2;
//  cout<<re<<"  "<<i<<endl;
    for(;i<size;i++)
        re=(re*(10%num))%num;
    //cout<<re<<"  "<<i<<endl;
    return re;
}
class BootsExchange{
public:
int leastAmount(vector <int> left, vector <int> right){
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    int comp=0;
    for(int i=0,j=0;i<left.size(),j<right.size();){
        if(left[i]==right[j])
        {
            comp++;
            i++;
            j++;
        }
        else{
        (left[i]>right[j])?j++:i++;
        
        }
    }
return left.size()-comp;
}
};
int size;
bool cansum(int *ar,int num,int ind){
if(ind==size || num<0)
    return false;
if(cansum(ar,num,ind+1)||cansum(ar,num-ar[ind],ind+1)||ar[ind]==num)
return true;
return false;
}
int main(){
    string a,b;
    int difs=0,dif[2];
    cin>>a>>b;
    if(a.size()!=b.size())
    {
    cout<<"NO";
    return 0;
    }
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
        if(difs==2){
            cout<<"NO";
            return 0;}
        else
        {
        dif[difs]=i;
        difs++;
        }

        
        }
    
    }
        if(difs!=2)
    {
    cout<<"NO";
    return 0;
        }
    if(a[dif[0]]==b[dif[1]]&&a[dif[1]]==b[dif[0]])
    {
    cout<<"YES";
    
    }
    else{
    cout<<"NO";
    
    }
    /*
    bool same=true;
    int n,k,temp,base=-1,t[100000],samek;
    cin>>n>>k;
    for(int i=0;i<k-1;i++)
        cin>>t[i];
    for(int i=k-1;i<n;i++)
    {
        cin>>temp;
        if(base==-1)
            base=temp;
        else{
        if(base!=temp)
            same=false;
        
        }
    }
    if(same==false)
        {cout<<-1;
    return 0;}
    samek=0;
    for(int i=k-2;i>=0;i--){
    if(t[i]==base)
    {samek++;
    
    }
    else{
    break;
    }
    }
    cout<<k-1-samek;*/
 //   system("pause");
    /*int a, b, n,remn,remn1;
    cin>>a>>b>>n;
    remn1=(a*10)%b;
    remn=b-remn1;
    if(remn>=10 && remn!=b)
    {
        cout<<-1;
        return 0;
    }
    cout<<a;
    if(remn1==0)
        cout<<0;
    else
        cout<<remn;
    for(int i=0;i<n-1;i++)
        cout<<0;*/
//  system("pause");
    /*remn=(retrem(b,n)*a)%b;
    need=b-remn;
    while(need>0){
    need/=10;
    needs++;
    }
    need=b-remn;
    if (needs>n)
    {
    
    cout<<-1;
    return 0;
    }
    cout<<a;
    for(int i=0;i<n-needs;i++)
        cout<<0;
    cout<<need;
    system("pause");
    int  wanted,*arr;
    cin>>size;
    arr=new int[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cin>>wanted;
    if(cansum(arr,wanted,0))
        cout<<boolalpha<<true;
    else cout<<boolalpha<<false;
    string pr;
    ofstream out("out.txt",ios::out);
    ifstream in("in.txt",ios::in);
vector <string> matrix;
*/
return 0;
}