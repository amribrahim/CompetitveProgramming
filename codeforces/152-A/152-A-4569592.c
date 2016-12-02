#include <stdlib.h>
#include<stdio.h>





int main(void)
{
    
    
    int students,mark,successful,counts,countm,stds[100]={0};
    char marks[10001] , larger;
    
        
    scanf("%d%d",&students,&mark);
        
    for(counts=0;counts<students*mark;counts++){
        scanf("%c",&marks[counts]);
            
        if (marks[counts]=='\n')
            counts--;
    }
        //printf("SSSHIT!");    
        for(countm=0;countm<mark;countm++){
            larger='0';
            for(counts=countm;counts<mark*students;counts+=mark){
                if(marks[counts]>larger)
                    larger=marks[counts];
            //  printf("SSSHIT!");  
                
                
            }
            for(counts=countm;counts<mark*students;counts+=mark){
                if(marks[counts]==larger)
                    stds[counts/mark]=1;
                    
            }
        }
        countm=0;
        for(counts=0;counts<students;counts++)
            countm+=stds[counts];
        printf("%d",countm);
    //system("pause");
    return 0;
}