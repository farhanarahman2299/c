#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,a[100],n;
    printf("Enter No. of Elements:");
    scanf("%d",&n);
    //srand(time(0));
    for(i=1;i<=n;i++)
    {
        a[i]=rand()%100;
        printf("\n%d",a[i]);
    }

}
