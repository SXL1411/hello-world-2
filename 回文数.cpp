#include<stdio.h>
int main(void)
{
int a; 
scanf("%d",&a);
int m;
int sum = 0;
m = a;
while(m)
{
sum = sum*10 + m%10;
m /= 10; // m = m/10
}
if( sum == a)
printf("是回文数!\n");
else
printf("不是回文数\n");
return 0;
}
