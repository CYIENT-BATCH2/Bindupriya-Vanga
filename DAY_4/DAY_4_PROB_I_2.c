#include <stdio.h>
int main()
{
    int n,n1,clearbit;
    scanf("%d %d",&n,&n1);
      clearbit = n & (~(1 << n1));
    printf("Before clearing the bit %d bit: %d\n", n1, n);
    printf("After clearing the bit %d bit: %d\n", n1, clearbit);
    return 0;
}
