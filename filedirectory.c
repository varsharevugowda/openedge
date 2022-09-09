#include<stdio.h>
#include<dirent.h>//working with directory

int main(void)//main method need read all the file with the help of cpp
{

    DIR *d;//create directory in a pointr
    struct dirent *dir;//create structre specific property we r using
    //acces the path of file
    //. mean difault
    d=opendir(".");//which location perticular location point the path
    if(d)
    {
        while((dir=readdir(d))!=NULL)
        {
            //printf("%s\n",dir->d_namelenth);
            printf("%s\n",dir->d_name);//pointng to the particular directory
        }
        closedir(d);
    }
    return(0);
}
