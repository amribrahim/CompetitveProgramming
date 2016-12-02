#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length,width,board;

    scanf("%d%d",&length,&width);
    board=length*width;
    board/=2;
    printf("%d",board);
    return 0;
}