#include<stdio.h>
#include<stdlib.h>


int main(){

    char number[20];
    int count,lcount=0;
    scanf("%s",number);
    for(count=0;number[count]!='\0';count++)
        if(number[count]=='7'||number[count]=='4')
            lcount++;


    sprintf(number,"%d",lcount);
    
    for(count=0;number[count]!='\0';count++)
    {
        if(!(number[count]=='7'||number[count]=='4')){
            printf("NO");
         //   scanf("%s",number);
            return 0;
        }

    }
    printf("YES");
   

        return 0;
}