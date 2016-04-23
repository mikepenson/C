/**
 * 求5！	
 */
#include "stdio.h"
int main(){
	int i,t;
	i=2;
	t=1;
	while(i<=5){
		t=t*i;
		i++;
	}
	printf("t=%d\n", t);
}