//������·����� 
//ax + by = c
//dx + ey = f
//ע������/�������������
//x=(ce-bf)/(ae-bd)
//y=(cd-af)/(bd-ae)
#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	printf("������x��y��ϵ��a,b,d,e,�Լ�c,f��ֵ��");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&d,&e,&c,&f);
	if(b*d==a*e)
		printf("�˷����޽⣡"); 
	else
	{
		x=(c*e-b*f)/(a*e-b*d);
		y=(c*d-a*f)/(b*d-a*e);
		printf("x,y��ֵ�ֱ�Ϊ%lf%lf",x,y);
	}
	 return 0;
 } 
