#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[102],str2[102],strs[102];
    int count;
    int is=1;
    strchr("dfgg",'s');
    scanf("%s%s%s",str1,str2,strs);
     if(strlen(str1)+strlen(str2)!=strlen(strs))
     is=0;
     for(count=0;str1[count]!='\0'&&is!=0;count++){

     char *z=strchr(strs,str1[count]);

     if(z==NULL){
     is=0;
     break;
     }
     else
     *z='-';
     }
     for( count=0;str2[count]!='\0'&&is!=0;count++){


   char *z=strchr(strs,str2[count]);

     if(z==NULL){
     is=0;
     break;
     }
     else
     *z='-';
     }

     if(strspn(strs,"-")!=strlen(strs)){

     is=0;

     }
     printf("%s",((is==0)?"NO":"YES"));
    return 0;
}