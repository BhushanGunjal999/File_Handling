#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD = 0;
    char Data[] = "India is my country";

    printf("Enter file name that you want to Open : \n");
    scanf("%s",Name);

    FD = open(Name,O_RDWR);
    if(FD == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is Succesfully opened\n");
    }
    write(FD,Data,19);

    close(FD);
    
    return 0;
}