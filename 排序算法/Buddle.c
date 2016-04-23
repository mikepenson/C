#include "stdio.h"
//冒泡排序 从小到大排序
void Buddle(int* array, int num){
	int i, j, temp;
	for ( i = 0; i < num-1; i++)
	{
		for ( j = 0; j < num-i-1; j++)
		{
			if (array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1]; 
				array[j+1] = temp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	printf("HELLO WORLD!!\n");
	return 0;
}