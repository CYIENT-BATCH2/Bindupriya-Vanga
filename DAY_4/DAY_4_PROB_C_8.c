 #include <stdio.h>
int main() 
{
    int i,j,k,l;
    printf("enter the value of i,j,k:");
    scanf("%d %d %d ",&i,&j,&k);
    l=i&&j||j&&k;
    printf("%d",l);
}
