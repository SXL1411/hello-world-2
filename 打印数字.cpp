#include <stdio.h>
int main()
{
  int num;
 int i,a[100],count=-1;
 scanf("%d",&num);
 while(num>0)
 {
  count++;
  a[count]=num%10;
  num/=10; 
 }
 for(i=count;i>=0;i--)
 {
  printf("%d",a[i]);
  if(i!=0)
  {
   printf(" ");
  }
  else
  {
   printf("\n");
  }
 }
}
