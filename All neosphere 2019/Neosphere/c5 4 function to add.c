#include<stdio.h>
void ram(int,int);      //There is no function called void , but a function can be declared with a return type of void .
int add(int,int);       //This means that the function doesn't return a value.
int main()              //void can also be used to indicate to the compiler that the function does not take any arguments.
{
    printf("%d",add(12,12));
    return 0;
}
int add (int num1,int num2)
{
    int x=(num1+num2);
    return x;
}
