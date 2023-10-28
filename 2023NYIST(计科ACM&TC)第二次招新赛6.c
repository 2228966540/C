//唯一一行包含一个整数 n(12<=n<1e10)
//输出两个合成整数 x 和 y 。 (1 < x, y < n) 以便 x + y = n 。如果有多个解，可以输出其中任意一个。
#include <stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	
	if ( n % 2 == 0){
		printf("4 %lld",n-4);
	}
	else {
		printf("9 %lld",n-9);
	}
	
	return 0;
}
