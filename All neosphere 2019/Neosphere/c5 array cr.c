#include<stdio.h>
void main(){
    int i,j;
    int arr[5][3];
    printf("Input for array [5][3]");
    for (i=0;i<5;i++)
    {
        for (j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    }
    printf ("The output is : \n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
