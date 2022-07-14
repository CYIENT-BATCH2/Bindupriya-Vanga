#include<stdio.h>
int main()
{
    int a,b,big;
    scanf("%d%d",&a,&b);
    (a>b)?(big=a):(big=b);
    printf("a=%d\nb=%d\nThe biggest num is : %d\n",a,b,big);
    return 0;
}
