#include <stdio.h>
int main()
{
 int x,y,z,z1,z2;
 printf("enter x and y values:");
 scanf("%d",&x);
 scanf("%d",&y);
 z=x&&y;
 z1=x||y;
 z2=!x;
 printf("z=%d\t z1=%d\t  z2= %d",z,z1,z2);
 return 0;
}
