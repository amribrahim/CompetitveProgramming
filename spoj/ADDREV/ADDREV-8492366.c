#include <stdio.h>
#include <stdlib.h>
int inverse(int x );
int main()
{
    int count ,number1,number2 , entries ;
    scanf("%d",&entries);
    for(count=1;count<=entries;count++)
    {
    scanf("%d %d",&number1,&number2);
    printf("%d\n",inverse(inverse(number1)+inverse(number2)));
        }

    return 0;
}
int inverse(int x )
{
    int l,m=1,z,k=0,f=0;
    while(x%10==0&&x!=0){
    x=x/10;
    }
    l=x;
    while(l!=0&&l/10>0){
    l/=10;
    m*=10;
    }
    while(x!=0){
    z=x%10;
    z*=m;
    k+=z;
    x/=10;
    m/=10;
    }
    return k;
}
