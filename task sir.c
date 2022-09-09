#include<stdio.h>
#include<stdlib.h>
int main(){
char str[45];
int mv;
char ch;
FILE *ptr1=fopen("abc.txt","r");
FILE *ptr2=fopen("abc1.txt","w");
while((ch=fgetc(ptr1))!=EOF){
printf("%4d",ftell(ptr1));
fputc(ch,ptr2);
}
//printf("\n%d",ftell(ptr2));


}
