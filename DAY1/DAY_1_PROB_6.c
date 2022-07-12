#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,temp;
    printf("enter the n elements ");
    scanf("%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    label:
    if(n1>n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
        goto label;
    }
    if(n2>n3)
    {
        temp=n2;
        n2=n3;
        n3=temp;
        goto label;
    }
    if(n3>n4)
    {
        temp=n3;
        n3=n4;
        n4=temp;
        goto label;
    }
    if(n4>n5)
    {
        temp=n4;
        n4=n5;
        n5=temp;
        goto label;
    }
    if(n5>n6)
    {
        temp=n5;
        n5=n6;
        n6=temp;
        goto label;
    }
    if(n6>n7)
    {
        temp=n6;
        n6=n7;
        n7=temp;
        goto label;
    }
    if(n7>n8)
    {
        temp=n7;
        n7=n8;
        n8=temp;
        goto label;
    }
    if(n8>n9)
    {
        temp=n8;
        n8=n9;
        n9=temp;
        goto label;
    }
    printf("%d%d%d%d%d%d%d%d%d",n1,n2,n3,n4,n5,n6,n7,n8,n9);
}



