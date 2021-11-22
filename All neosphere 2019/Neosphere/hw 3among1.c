#include<stdio.h>
int main()
{
    double x,y,z;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);
    if( x>=y && x>=z )
        printf("[%d] First pressed number is the largest one.", x);
    else if( y>=x && y>=z )
        printf("[%d] Second pressed number is the largest one.", y);
    else( z>=x && z>=y );
        printf("[%d] Third pressed number is the largest one.", z);
}
