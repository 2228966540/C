//斐波那契数列
//输入月数n（1<=n<=44）
//输出第n个月有多少对兔子。 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int a = 1;
	int b = 1;
	
	int i = 3;
	int t = 0;
	for ( i = 3; i <= n; i++){
		t = a + b;
		a = b;
		b = t;
	}
	
	printf("%d",t);
	
	return 0;
}