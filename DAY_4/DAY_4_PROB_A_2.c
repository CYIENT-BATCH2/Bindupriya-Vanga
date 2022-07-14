#include <stdio.h>

int main() 
{
    int x,y,z,k;
    printf("enter the values of x,y,z:");
    scanf("%d %d %d",&x,&y,&z);
    k= x% y+z*z;
    printf("%d",k);
}
