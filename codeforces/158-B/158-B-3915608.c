#include <stdio.h>
#include <stdlib.h>
//e2bal ya bernamg ya 7akeer :D
void sort(int tarr[],int groups){

int count , count2 , swap;
for(count=1;count<groups;count++){

for(count2=0;count2<groups-1;count2++){

if(tarr[count2]<tarr[count2+1]){
swap=tarr[count2];
tarr[count2]=tarr[count2+1];
tarr[count2+1]=swap;
}


}






}







}
int main()
{
   /* int taxi=0,groups,num=0,stdn,currtax=0,i=0,tarr[100000]={0},grps[50]={0};
    scanf("%d",&groups);
    int coun;
    for(coun=0;coun<groups;coun++)
    {
        scanf("%d",&tarr[coun]);
    }
    sort(tarr,groups);
    for(coun=0;coun<groups;coun++)
    {
       //sscanf(&tarr[coun],"%d",&stdn);

         /*   if(currtax+tarr[coun]<=4){
                currtax+=tarr[coun];

                }
            else {
                currtax=tarr[coun];
                taxi++;

            }
            if( currtax==4)
        {

                currtax=0;
                taxi++;

        }
printf("%d",currtax);
getchar();


        for(i=0;i<50;i++){
        if(tarr[coun]+grps[i]<=4){
        grps[i]+=tarr[coun];
        break;
        }
        }
        }


for(i=0;grps[i]!=0;i++){
taxi++;
}


if( currtax!=0)
taxi++;

printf("%d ",taxi);

*/
int thedude,groups,taxis=0,onesneeded=0,towsneeded=0,threesneeded=0,count,temp;
    scanf("%d",&groups);
    for(count=0;count<groups;count++){

    scanf("%d",&thedude);
    if(thedude==4){
    taxis++;
    }

    else if(thedude==3)
    threesneeded++;


    else if(thedude==2)
    towsneeded++;

    else if(thedude==1)
    onesneeded++;


    }
 //  printf("%d %d %d %d \n\n\n",taxis,onesneeded,towsneeded,threesneeded);

if(onesneeded>0&&threesneeded>0){
if (onesneeded==threesneeded){
    taxis+=threesneeded;
    onesneeded=0;
    threesneeded=0;

}

else if (onesneeded>threesneeded)
{
    taxis+=threesneeded;
    onesneeded-=threesneeded;

    threesneeded=0;


}
else
{
     taxis+=onesneeded;
      threesneeded-=onesneeded;
    onesneeded=0;

}

}
 //printf("%d %d %d %d \n\n\n",taxis,onesneeded,towsneeded,threesneeded);
if(onesneeded>1){
temp=onesneeded%2;
towsneeded+=(onesneeded-temp)/2;
onesneeded=temp;

}
 //printf("%d %d %d %d \n\n\n",taxis,onesneeded,towsneeded,threesneeded);
if(towsneeded>1){
temp=towsneeded%2;
taxis+=(towsneeded-temp)/2;
towsneeded=temp;

}
if(onesneeded>0&&towsneeded>0){
    if(onesneeded==towsneeded){
    threesneeded+=onesneeded;
    onesneeded=0;
    towsneeded=0;}
    if(onesneeded>towsneeded){
    threesneeded+=towsneeded;
    onesneeded-=towsneeded;
    towsneeded=0;}
    else {
    threesneeded+=onesneeded;
    towsneeded-=onesneeded;
    onesneeded=0;


    }


}
 //printf("%d %d %d %d \n\n\n",taxis,onesneeded,towsneeded,threesneeded);
taxis+=towsneeded;
taxis+=onesneeded;
taxis+=threesneeded;
 //printf("%d %d %d %d \n\n\n",taxis,onesneeded,towsneeded,threesneeded);
printf("%d",taxis);
    return 0;
}