#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char data[50];
                                    //Opening an existing file .
    printf("opening the file test.c in write mode\n");
    fp= fopen("test.c", "w");
    if (fp=NULL)
    {
        printf("could not open file test.c");
        return 1;
    }
    printf("\n enter some text from keyboard for test.c\n");
                                  //getting input from the user
      while (strlen (gets(data))>0)
      {
                                        //writing in the file
          fputs(data,fp);
          fputs("\n",fp);
      }
                                         //closing the file
      printf("closing the file test.c");
      fclose(fp);
      return 0;
}
