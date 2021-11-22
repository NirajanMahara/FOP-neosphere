#include<stdio.h>
void main ()
{
    int x,y,sum;
    x=1;
    while(x<=5){
        sum=0;
        y=1;
        while (y<=10){
        printf("%d",y);
        sum=sum+y;
        y++;
        }
    printf("=%d",sum);
    printf("\n");
    x++;
    }
}
