#include<string.h>
void main()
{
    int i,*p;
    i=10;
    printf("%d\n",i);
    printf("%x\n",&i);
    p= &i; //address of i is assigned to P
    printf("%x\n",p);
    printf("%d",*p);   //value
}
