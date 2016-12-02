#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//hello again , just a try :D
int main()
{
    while(1){
    char az[200];
    char af[300]={};

    int num,count,countf,countl;
    scanf("%s",az);
    if(strcmp(az,".")==0)
    break;
    scanf("%d",&num);
    for(count=0;count<num;count++)
        strcat(af,az);

    count=strlen(az);
    for(num=0;num<count;num++){
    for(countf=num;af[countf]!='\0';countf++)
    printf("%c",af[countf]);

    for(countl=0;countl<num;countl++)
    printf("%c",af[countl]);
    puts("");
   // printf("\n");
    }
    }
    return 0;
}
