#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mohamad[100];
    int count;
    scanf("%s",mohamad);
    for(count=0;mohamad[count]!='\0';count++){
    if (mohamad[count]=='a'||mohamad[count]=='A'||mohamad[count]=='O'||mohamad[count]=='o'||mohamad[count]=='y'||mohamad[count]=='Y'||mohamad[count]=='e'||mohamad[count]=='E'||mohamad[count]=='u'||mohamad[count]=='U'||mohamad[count]=='i'||mohamad[count]=='I')
    continue;
    else
    printf(".%c",tolower(mohamad[count]));
    }

    return 0;
}