#include<stdio.h>
int main()
{
   int s,rev=0,n;
   printf("enter number:");
   scanf("%d",&s);
   n=s;
   while(n)
   {
       rev=rev*10+n%10;
       n=n/10;
   }
   if(rev==s)
   printf("polindrome");
   else
   printf("not polindrome");
}
