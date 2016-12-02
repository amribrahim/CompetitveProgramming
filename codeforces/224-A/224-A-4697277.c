#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*
typedef struct  {
int score;
char name[34];
int round;
int maxscore;

} player;*/
int main(){
	/*
	player players[1000],temp;
	int n,playern=0,count,countp,biggest=-2000,biggesti,round=1001;
		FILE *fptr;
	fptr=fopen("E:\\lab\\12.txt","r");
	fscanf(fptr,"%d",&n);
	for(count=1;count<=n;count++)
	{
		fscanf(fptr,"%s%d",&temp.name,&temp.score);
		for(countp=0;countp<playern;countp++)
		{
			if(strcmp(temp.name,players[countp].name)==0)
				break;
		}

		if(countp<playern)
		{
			players[countp].score+=temp.score;
			if(players[countp].score>players[countp].maxscore)
			{
				players[countp].round=count;
			players[countp].maxscore=players[countp].score;

			}
		}
		else
		{

			players[countp].score=temp.score;
			strcpy(players[countp].name,temp.name);
			players[countp].round=count;
			players[countp].maxscore=temp.score;
			playern++;
		}
		
	
	//printf("%s ,%d\n",players[0].name,players[0].score);		
	}
	//for(count=0;count<playern;count++)
	//printf("%s ,%d\n",players[count].name,players[count].score);
	for(count=0;count<playern;count++)
	{
		if(players[count].score>biggest)
			biggest=players[count].score;
		
	}
		for(count=0;count<playern;count++)
	{
		if(players[count].score==biggest){
			if(players[count].round<round)
			{

				biggesti=count;
				round=players[count].round;
			}

		}
	}

		printf("%s\n",players[biggesti].name);*/
	int xy,xz,zy,x,y,z;
	scanf("%d%d%d",&xy,&xz,&zy);
	y=sqrt((((double)xy/xz)*zy));
	x=xy/y;
	z=zy/y;
	printf("%d",4*(x+y+z));
//system("Pause");
	return 0;
}