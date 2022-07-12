#include <stdio.h>
#include <stdlib.h>
int main()
{	  
	int n,sum=0;
	printf("enter numbers:");
	scanf("%ld",&n);
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	printf("%ld",sum);
}
