#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rep, count1,count2,num;
    char spell[1000];
    scanf("%d",&count1);
    for(rep=0;rep<count1;rep++){
    scanf("%d%s",&num,&spell);
    printf("%d ",rep+1);
    for(count2=0;spell[count2]!='\0';count2++){
    if(count2+1==num)
    continue;
    printf("%c",spell[count2]);

    }
    printf("\n");
    }
    return 0;
}
