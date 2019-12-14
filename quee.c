#include<stdio.h>
int Q[10]={0,0,0,0,0,0,0,0,0,0},i, max=5,f=0,r=0,item,c;
int qdel()
{
    if (f==0&&r==0)
    {
        printf("\nQueue is Empty");
        return 0;
    }
    Q[f]=0;
    if(f==r)
    {
        f=0;
        r=0;
    }
    else if (f==max)
        f=1;
    else f=f+1;
    printf("FRONT=%d   RARE=%d",f,r);
    printf("\nQUEUE:\n");
    for(i=1;i<=max;i++)
    {
        printf("%5d",Q[i]);
    }
}
int qins()
{
    if ((f==1&&r==max)||(f==r+1))
    {
        printf("Queue is Full");
        return 0;
    }
    if(f==0&&r==0)
    {
        f=1;r=1;
    }
    else if(r==max)
        r=1;
    else{r=r+1;}
    printf("\nEnter New item for Insert:");
    scanf("%d",&item);
    Q[r]=item;
    printf("FRONT+%d  RARE=%d",f,r);
    printf("\nQueue:\n");
    for(i=1;i<=max;i++)
    {
        printf("%5d",Q[i]);
    }
}
int main()
{
    for(;;)
    {
        printf("\nEnter your choice:\n1. QINSERT\n2. QDELETE\n3. Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            qins();break;
        case 2:
            qdel();
            break;
        default:
            return 0;
        }
    }
    return 0;
}
