#include <stdio.h>
int main()
{
    int a,b,c;
       printf("enter numbers:");
       scanf("%d %d %d",&a,&b,&c);
       if(a>=b&&a>=c)
       printf("a is largest");
       if(b>=a&&b>=c)
       printf("b is latgest");
       if(c>=a&&c>=b)
       printf("c is largest");
    return 0;
}
