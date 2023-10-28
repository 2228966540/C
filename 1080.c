//你存和不就好了？？？纠结什么呢搁这？
//输入数据有多组。
//每组一行，为两个整数A, B。输入0 0表示输入结束，该组输入不用处理。 
//对每行输入，输出A+B的值，单独占一行。 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;//每次读入的两个整数
	int *data = NULL;
	int cnt = 0;
	int sum = 0;
	
	while(1) {
		scanf ("%d %d",&a,&b);

		sum = a + b;
		if ( sum == 0) {
			break;
		}
		data = (int *)realloc( data, (cnt+1)*sizeof(int) );
		data[cnt] = sum;
		cnt ++;
	}
	
	int i = 0;
	for ( i = 0; i < cnt; i++){
		printf("%d\n",data[i]);
	}
	
	free(data);
	
	return 0;
}