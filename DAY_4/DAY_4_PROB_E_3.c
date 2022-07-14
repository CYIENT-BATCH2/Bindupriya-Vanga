#include <stdio.h>
int main() 
{
    int i,j,k;
    printf("enter the value of i,j:");
    scanf("%d %d",&i,&j);
  k=--i+j++ * i++ -j--; 
    printf("%d %d %d",i,j,k);
}
