//输入第1行为一个整数n(1≤n≤10)，代表测试的组数。
//下面有n组测试数据，每组1行，为2个整数，为A, B。 
//对每行输入，输出A+B的值，单独占一行。 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n][2];
	
	int i,j;
	for( i = 0; i < n; i++){
		for ( j = 0; j < 2; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int r;
	for ( r = 0; r < n ; r++){
		printf("%d\n",a[r][0]+a[r][1]);
	}
	
	return 0;
}