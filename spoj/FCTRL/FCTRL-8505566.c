#include <stdio.h>
int main()
{   int count,entries;
    long int number ;
    long int wahdan=0 ;
    scanf("%d",&entries);
    for(count=1;count<=entries;count++)
    {   wahdan=0;
        scanf("%ld",&number);
        for(;number>0;)
        {   number/=5;
            wahdan+=number;
            }
        printf("%ld\n",wahdan);
    }

    return 0;
}
