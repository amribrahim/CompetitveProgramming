#include <stdio.h>
long long int z(long long int x);
int main()
{

 long int s=0;
 long long int q;
 long long int num=0;
 do{
 scanf("%ld",&s);}
 while(s<=0||s>100000);
 for(q=1;q<=s;q++){
 do{
 scanf("%lld",&num);}
 while(num<=0||num> 1000000000);
 printf("%lld\n",z(num));}

 return 0;
}

long long int z(long long int x)
{
 long double i=5;
 long long int trailling=0;

 for(i=5;i<=x;i*=5){
 trailling=trailling+(x/i);
 }

 return trailling;
}
