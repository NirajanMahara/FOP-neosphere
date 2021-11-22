int add(int,int);
void errMsg(int);
int add(int x, int y)
{
    return (x+y);
}
void errMsg(int errorCode)
{
    switch(errorCode)
    {
    case 101:
        printf("System error");
        break;
    case 102:
        printf("Graphics error");
        break;
    default:
        printf("I'm not understanding you");
    }
}
