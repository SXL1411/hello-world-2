//���һԪ���η��̵ĸ� �� 
//����sqrt()���� �� 
//ע����û�н⡣ 
 //һ��ʽ��ax*x+bx+c=0
#include <stdio.h>
#include <math.h>
int main ()
{
	double a,b,c,d;
	printf("������һԪ���η��̵�ϵ��a,b,c:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("�˷����޽�\n");
		return 1; 
	}
	if(d==0)
	{
		printf("������������ȵĸ���x1=x2=%lf\n",-b/(2*a));
		return 0;
	}
	if(d>0)
	{
		printf("��������������ȵĸ���x1=%lf x2=%lf",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
	}
	return 0;
 } 
