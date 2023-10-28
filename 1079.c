//输入数据有多组。每组一行，为整数A, B。 
//对每行输入，输出A+B的值，单独占一行。 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;//每行的两个数
	int sum;//每行的两个数的和
	int *data = NULL;//初始化一个指针类型变量，其值为NULL
	int cnt = 0;
	
	while( scanf("%d %d",&a,&b) != EOF){
		sum = a + b;
		
		//动态分配空间以存放sum
		data = (int *)realloc( data, (cnt+1) * sizeof(int) );
		data[cnt] = sum;
		cnt++;
	}
	
	int i = 0;
	for ( i = 0; i < cnt; i++){
		printf("%d\n",data[i]);
	}
	
	free(data);
	
	return 0;
}