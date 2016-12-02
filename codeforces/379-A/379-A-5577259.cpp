#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;/*
void init(long long int number,string& num){
    stringstream temp;
    temp<<number;
    temp>>num;
}
bool has1d(long long int number,string &num)
{
    string num2;
    init(number,num2);
    for(int x=0;x<num.size();x++)
        for(int y=0;y<num2.size();y++)
            if(num[x]==num2[y])
                return true;
    return false;
}
*/
int main(){
    //while(true){
    
    int candles,unused=0,req,hours=0;
    cin>>candles>>req;
    while(candles!=0)
    {
        hours+=candles;
        unused+=candles;
        candles=unused/req;
        unused-=candles*req;



    }

        cout<<hours;

    
    
    
    
    //}
    //system("pause");






    return 0;
}