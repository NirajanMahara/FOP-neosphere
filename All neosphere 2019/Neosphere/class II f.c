#include<stdio.h>
void main()
{
    int dayNum;
    printf("enter a day number:");
    scanf("%d",&dayNum);
    if(dayNum==1){
        printf("sunday");
        }else if (dayNum==2){
        printf("monday");
        }else if (dayNum==3){
        printf("tuesday");
        }else{
        printf("EROOR_404 :-(");
        }
}

