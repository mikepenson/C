#include <stdio.h>
int main()
{	
	//声明部分
	int i,j,a=10,b=20,c;
	int test(int a,int b);

	//执行部分
	printf("99数乘表！！\n");
	for (i = 1; i < 10; ++i)
	{
		for ( j= 1; j <= i; ++j)
		{
			printf("%d*%d=%d\t", i,j,i*j);
		}
		printf("\n");
	}

	printf("\n");
	printf("计算a+b等于？？\n");
	c=test(a,b);//调用函数，相当于把函数的返回值部分（也就是a+b）赋给c
	printf("%d+%d=%d\n", a,b,c);
	return 0;
}
//int是返回数据类型，因为a+b是int类型，所以函数返回也是int型
int test(int a,int b){
	return a+b;
}
