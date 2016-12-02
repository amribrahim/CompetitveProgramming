#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int count,c2,cv;
    scanf("%d",&count);
    for(c2=1;c2<=count;c2++)
    {
    char m1[2000];
    char *m2;
    int HHH=0,TTT=0,THT=0,TTH=0,HTT=0,HTH=0,HHT=0,THH=0;
    scanf("%d%s",&cv,m1);
    m2=m1;
    while(strlen(m2)>2){
    if(strncmp(m2,"HHH",3)==0)
    HHH++;
   else if(strncmp(m2,"TTT",3)==0)
    TTT++;
   else if(strncmp(m2,"THT",3)==0)
    THT++;
   else if(strncmp(m2,"TTH",3)==0)
    TTH++;
   else if(strncmp(m2,"HHT",3)==0)
    HHT++;
   else if(strncmp(m2,"THH",3)==0)
    THH++;
   else if(strncmp(m2,"HTH",3)==0)
    HTH++;
   else if(strncmp(m2,"HTT",3)==0)
    HTT++;
    m2++;
    }
    printf("%d %d %d %d %d %d %d %d %d\n",cv,TTT,TTH,THT,THH,HTT,HTH,HHT,HHH);
    }
    return 0;
}