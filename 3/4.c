#include "stdio.h"
#include "math.h"
int main(){
	double a,b,c,s,area;
	a=3.67;
	b=5.67;
	c=6.21;
	s=(a+c+b)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%f\nb=%f\nc=%f\n",a,b,c );
	printf("area=%f\n",area );
	return 0;
	
}