 #include <stdio.h>
/* Write C Program to find all prime numbers from 1 to N using while and do while loop provided by the user.*/

/* C program to to find all prime numbers from 1 to N using while loop.*/
#include <stdio.h>
int main()
{
  int n,i=1,j,cnt=0;
  printf("\n Enter Any Number:");
  scanf("%d",&n);
  printf("\n Prime number between 1 to %d \n",n);
  while(i<=n)
  {
     cnt=0;
     j=1;
     while(j<=i)
     {
      if(i%j==0)
      {
       cnt++;
      }
     j++;
   }
     if(cnt==2)
     {
      printf(" %d",i);
     }
     i++;
 }
  return 0;
}