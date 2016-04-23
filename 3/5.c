#include "stdio.h"
#include "math.h"
int main(){
	double a,b,c,disc,x1,x2,p,q;//disc用来存放判别表达式（b*b-4ac）
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if (disc<0)
	{
		printf("This equation haven't real roots\n");
	}else
	{
		p=-b/(2.0*a);
		q=sqrt(disc)/(2.0*a);
		x1=p+q;//求出方程的两个根
		x2=p-q;
		printf("x1=%7.2f\nx2=%7.2f\n", x1,x2);
	}
	printf("%13.1e\n", 123.456);//宽度13，小数部分1位
	int j=-1;
	printf("%d\n%o\n", j,j);//%o表示用八进制的整数输出
	printf("%x\n", j);//表示用十六进制数的整数输出

	char c1,c2,c3,c4;
	scanf("\n%c %c\n%c %c",&c1,&c2,&c3,&c4);
	printf("%c,%c,%c,%c\n",c1,c2,c3,c4 );

	return 0;
}