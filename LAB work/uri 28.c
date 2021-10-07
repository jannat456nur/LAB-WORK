
#include<stdio.h>
int main()
{
    int x,y,avr;
    printf("enter the value:");
    scanf("%d %d",&x,&y);
    if (x==1)
    {
        printf
               ("Total: R$ %0.2f",(float)(4.00*y));

    }
    if (x==2)
    {
        printf
               ("Total: R$ %0.2f",(float)(4.50*y));

    }
    if (x==3)
    {
        printf
               ("Total: R$ %0.2f",(float)(5.00*y));

    }
    if (x==4)
    {
        printf
               ("Total: R$ %0.2f",(float)(2.00*y));

    }
    if (x==5)
    {
        printf
               ("Total: R$ %0.2f",(float)(1.50*y));

    }
    return 0;
}
