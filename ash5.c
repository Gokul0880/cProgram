#include<stdio.h>
int main()
{
    int rollNO;
    int result = 0;
    for(rollNO=0;rollNO<=5;rollNO++){
        result = result + rollNO;
    }
    printf("%d",result);
    return 0;
}