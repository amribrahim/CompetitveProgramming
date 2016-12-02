#include <stdio.h>
#include <stdlib.h>
/*
typedef enum{EVEN , ODD}type;
type findtype(int a,int b, int c){
    int coun,even,odd;
    if((a%2==0&&b%2==0)||(a%2==0&&c%2==0)||(c%2==0&&b%2==0))
        return EVEN;
    else 
        return ODD;
}
int findind(type x,const int array[],int elnum){
    int count;
    for(count =0;count<elnum;count++)
    {
    if( (x==EVEN)?array[count]%2==0:array[count]%2!=0)
        break;

    }

    return count+1;



}

int nozero(int num){
    char first[11];
    char temp[11];
    int count,count2,x;
    sprintf(first ,"%d",num);
    
    for(count=0,count2=0;first[count]!='\0';count++){
        if(first[count]!='0'){
            temp[count2]=first[count];
            count2++;}
        }
        temp[count2]='\0';
    sscanf(temp,"%d",&x);
    return x;
    }
    */

int main () {

/*  
int arr[100],elnum,count;
type arrtype;
scanf("%d",&elnum);
for(count =0;count<elnum;count++)
scanf("%d",&arr[count]);
arrtype=findtype(arr[0],arr[1],arr[2]);
printf("%d",findind(!(arrtype),arr,elnum));
    
*/



    //Twins
    int arr[100],elnum,counto,counti,temp,sum=0,summe=0;
        scanf("%d",&elnum);
    for(counto=0;counto<elnum;counto++)
        scanf("%d",&arr[counto]);
    for(counto=0;counto<elnum-1;counto++)
    for(counti=0;counti<elnum-1;counti++)
        if(arr[counti]<arr[counti+1])
        {
            temp=arr[counti];
            arr[counti]=arr[counti+1];
            arr[counti+1]=temp;
        }
        
        for(counto=0;counto<elnum;counto++)
        sum+=arr[counto];
        counti=0;
        while(summe<=sum){
            summe+=arr[counti];
            sum-=arr[counti];
            counti++;
    
        }

        printf("%d",counti);

    /*
    int num1,num2,res;
    scanf("%d%d",&num1,&num2);
    res=num1+num2;
    if(nozero(num1)+nozero(num2)==nozero(res))
        printf("YES");
    else
    printf("NO");



    */
    /*
    char marks[1000];
    int students,mark,successful,count1;
    scanf("%d%d",&students,&mark);
    for(count1=0;count1<students*mark;count1++){
        scanf("%c",&marks[count1]);
        if (marks[count1]=='\n')
            count1--;
    }
    for(count1=0;count1<students*mark;count1++)
        printf("%c\n",marks[count1]);

        */









   // system("pause");
    return 0;
}