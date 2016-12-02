#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , dis[130]={0},coun,mah1,mah2,dis1=0,dis2=0,hold;
    scanf("%d",&num);
    for(coun=1;coun<=num;coun++){
    scanf("%d",&dis[coun]);
    }
    scanf("%d%d",&mah1,&mah2);
    if (mah1>mah2){
    hold=mah1;
    mah1=mah2;
    mah2=hold;
    }
    for(coun=mah1;coun<mah2;coun++){
    dis1+=dis[coun];
    }

    for(coun=mah1-1;coun>0;coun--){
    dis2+=dis[coun];
    }

    for(coun=mah2;dis[coun]!=0;coun++){
    dis2+=dis[coun];
    }
    if(dis1>dis2)
   printf("%d",dis2);
    else
    printf("%d",dis1);

    return 0;
}