#include<stdio.h>
struct books
{
        int bookId;
        char Bookname[20];
}
c[2];
void main()
{
    c[0].bookId=1;
    strcpy(c[0].Bookname,"C programming");
    c[0].bookId=1;
    strcpy(c[1].Bookname,"Java programming");
    printf("%d",c[0]\n.bookId);
    printf("|%s",c[0]\n.Bookname);
    printf("%d",c[1].bookId);
    printf("|%s",c[1]\n.Bookname);
}
