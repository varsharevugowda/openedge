[10:19] PALLAVI KATARI (TRAINER) (Guest)
#include<stdio.h>

int main()

{​​​​​

      FILE *fp;

      char ch;

      int i,pos;

      fp=fopen("studentdetails.txt","r");

      if(fp==NULL)

      {​​​​​

            printf("File does not exist..");

      }​​​​​

      fseek(fp,0,SEEK_END);

      pos=ftell(fp);

      printf("Current position is %d\n",pos);

      i=0;

      while(i<pos) //0<5  Hello 1<5

       {​​​​​

            i++;//1 2

            fseek(fp,-i,SEEK_END); //studentdetails,-1,from the end of the file

            ch=fgetc(fp);//each character displays from the end

            printf("%c",ch); //olleH

      }​​​​​

      return 0;

}​​​​​ 

