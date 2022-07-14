#include <stdio.h>
int main() 
{
    int x,y;
    printf("enter the values of x,y:");
    scanf("%d %d",&x,&y);
  y=x+y-(x=y);
    printf("%d",y);
}
