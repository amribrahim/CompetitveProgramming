#include <stdio.h>
#include <stdlib.h>

int main()
{
    int teams,probs=0,team[3];
    scanf("%d",&teams);
    while(teams--){
    scanf("%d %d %d",&team[0],&team[1],&team[2]);
    if(team[0]+team[1]+team[2]>=2)
    probs++;

    }
    printf("%d",probs);
    return 0;
}