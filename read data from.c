#include <stdio.h>
void main()
{
    FILE*myFile;
    myFile=fopen("f:\\somenumber.txt","r");
    FILE*fptr;
    fptr=fopen("f:\\program.txt","w");
    int  numberArray[16];
    int i;

    for(i=0;i<10;i++)
    {
        fscanf(myFile,"%d",&numberArray[i]);
    }
    for(i =0;i<10;i++)
    {
        fprintf(fptr,"Number is:%d\n\n",numberArray[i]);
        printf("Number is:%d\n\n",numberArray[i]);
    }

}
