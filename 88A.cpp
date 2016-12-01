#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#define LENGTH 12
using namespace std;
int distanced(string &a){
    static const string k[]={"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

    for(int i=0;i<LENGTH;i++)
        if(a==k[i])
            return i;
    return LENGTH+1;
}
int meas(int first,int second,int base){
if(second<first)
     second+=base;
 return second-first;


}
int main(){
string res[]={"strange","major","minor"};
string strs[3];
int distance[3][3]={0};
int intd[3];
int type=0;
cin>>strs[0]>>strs[1]>>strs[2];
for(int i=0;i<3;i++)
intd[i]=distanced(strs[i]);
for (int row=0;row<3;row++)
    for(int col=0;col<3;col++){
       distance[row][col]=meas(intd[row],intd[col],LENGTH);
    }

/*
for (int row=0;row<3;row++ )
{
for(int col=0;col<3;col++)
cout<<distance[row][col]<<"   ";
cout<<endl;	
}
*/
for (int row=0;row<3;row++ )
    for(int col=0;col<3;col++)
        if(distance[row][col]==4)
        {
       if (distance[col][3-(col+row)]==3)
                type=1;
        }
        else if(distance[row][col]==3)
        {
            if(distance[col][3-(col+row)]==4)
                type=2;


        }

cout<<res[type];


    return 0;
}
