#include <stdio.h>
void main()
{
    int i, n, sum=0;

    //Input upper limit from user
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        sum = sum + i;
    }
    printf("Sum of all even number between 1 to %d = %d", n, sum);
}
