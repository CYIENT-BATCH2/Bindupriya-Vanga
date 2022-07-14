#include <stdio.h>
int main() 
{
    int i,j,m,k;
    printf("enter the value of i,j,m:");
    scanf("%d %d %d",&i,&j,&m);
    k=i&j|j||m;
    printf("%d",k);
}
