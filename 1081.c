//输入第一行是一个整数T，表示有T组测试实例；
//每组输入包括两行：第一行一个数n表示接下来会有n个整数；第二行空格隔开的n个数。 
//对于每组输入，在一行输出n个数的和（保证和不会超出int类型的范围）
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int T;//组数
	scanf("%d", &T);
	int i = 0;//
	int j,k;
	int a,b;//a是每组数据之和，b是临时读入的数据
	int *data = NULL;//声明一个整数指针，初始值为NULL，(用来存放每个a的值的数组)
	int count = 0;
	for ( i = 0; i < T; i++){
		scanf("%d",&j);//一组的数字个数
		a = 0;
		//求出一组数据之和
		for ( k = 0; k < j; k++){
			scanf("%d",&b);
			a += b;
		}
		
		data = ( int* )realloc( data,(count + 1) *sizeof(int) );
		data[count] = a;
		count++;
	}
	
	int r = 0;
	for ( r = 0; r < count; r++) {
		printf("%d\n",data[r]);
	}
	
	free(data);
	return 0;
}