#include<stdio.h>
main()
{
    FILE *myFile;
    myFile = fopen("d:\\somenumbers.txt","r");
    int numberArray[16];
    int i;
    for(i=0;i<10;i++)
    {
        fcsanf(myFile, "%d",&numberArray[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Number is: %d\n\n",numberArray[i]);
    }
}
