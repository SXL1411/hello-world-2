//求解如下方程组 
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
//x=(ce-bf)/(ae-bd)
//y=(cd-af)/(bd-ae)
#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	printf("请输入x和y的系数a,b,d,e,以及c,f的值：");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&d,&e,&c,&f);
	if(b*d==a*e)
		printf("此方程无解！"); 
	else
	{
		x=(c*e-b*f)/(a*e-b*d);
		y=(c*d-a*f)/(b*d-a*e);
		printf("x,y的值分别为%lf%lf",x,y);
	}
	 return 0;
 } 
