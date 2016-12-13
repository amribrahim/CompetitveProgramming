#include <iostream>

using namespace std;
int digits[10];
int main()
{

int sized,temp,rem=0;
cin>>sized;
for(int i=0;i<sized;i++)
{
    cin>>temp;
    digits[temp]++;
}

for(int i=0;i<10;i++)
{
rem+= ( (i%3) *digits[i] )%3;
rem%=3;


}
for(int i=1;i<10&&rem!=0;i++)
{
if(rem== i%3 && digits[i]>0)
   {
   digits[i]--;
   rem=0;
   }


}

for(int i=1;i<10&&rem!=0;i++)
{
if(i%3>0)
   {

   while(digits[i]&&rem)
   {
   rem-=i%3;
   rem%=3;
   digits[i]--;
   }
   }


}

if(rem==0 && digits[0]>0){
for(int i=9;i>0;i--)
{    for(int j=0;j<digits[i];j++)
        {
        cout<<i;
        rem++;

        }

}
if(rem>0)
for(int j=0;j<digits[0];j++)
        cout<<0;
else
    cout<<0;

}
else
cout<<-1;





    return 0;
}