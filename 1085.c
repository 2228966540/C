//输入数据包含多个测试实例，每个测试实例占一行，每行的第一个数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每组数据必定至少存在一个奇数。 
//输出每组数中的所有奇数的乘积，对于测试实例，输出一行。 
#include <stdio.h>
#include <stdlib.h>
int ISOdd(int x)
{
	if ( x % 2 != 0 ) {
		return x;
	}
	//是奇数则返回它自身，否则返回0
	return 0;
}

int main(int argc, const char *argv[]) 
{
	int n;
	int *p = NULL;
	int cnt = 0;
	int sum;

	//读一行，判一行
	while ( (scanf("%d",&n)) != EOF) {
		sum = 1;
		int i;
		int a;
		for ( i = 0; i < n; i++) {
			scanf("%d",&a);
			if ( ISOdd(a) != 0 ) {
				sum *= a;
			}
		}		
		//动态分配空间以存放每行的sum
		p = (int *)realloc(p,(cnt+1)*sizeof(int));
		p[cnt] = sum;		
		cnt++;
	}
	//遍历数组p，输出每行的积
	int x = 0;
	for ( x = 0; x < cnt; x++){
		printf("%d\n",p[x]);
	}
	
	free(p);
	
	return 0;
}