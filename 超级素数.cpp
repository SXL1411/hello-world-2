#include<stdio.h>
#define maxn 1005
int a[maxn],tot;
int prime(int num)
{             //�ж��Ƿ�������
    if(num == 1)
	return false;
	if(num == 2 || num == 3)       
	return true;
	if(num % 6 != 1 && num % 6 != 5)
	return false;
	for(int i = 5; i*i <= num; i += 6)
	{
	if(num % i == 0 || num % (i+2) == 0)
	return false;    
    }    
	return true;
	}
	int main()
	{  
	tot=0;  
	for(int i=100;i<=9999;i++)
	{ 
	int n=i;      
	int cnt=0,b[5];   
	while(n)
    {         //��λ�ֽ�      
	b[cnt++]=n%10;    
	n/=10; 
	}   
    int sum=0,mul=1,sum_mul=0;      
	for(int i=0;i<cnt;i++)
	{           
	sum+=b[i];  
	mul*=b[i];
	sum_mul+=b[i]*b[i];  
	}  
	if(prime(i)&&prime(sum)&&prime(mul)&&prime(sum_mul))  //��������    
		a[tot++]=i; 
	}    
	for(int i=0;i<tot;i++)       
	printf("%d ",a[i]);      
	printf("\n");  
	int sum=0;
	for(int i=0;i<tot;i++)
	sum+=a[i];      
	printf("����:%d\n",tot);
    printf("���ֵ:%d\n",a[tot-1]); 
	printf("��:%d\n",sum);    
    return 0; 
	}
