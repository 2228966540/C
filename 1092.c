//输入两个正整数m和n，输出m和n之间的所有素数。 
//要求程序定义一个prime()函数和一个main()函数，prime()函数判断一个整数n是否是素数，其余功能在main()函数中实现。 
#include <stdio.h>
#include <math.h>
int prime(int n) 
{ 
	int x;
	for ( x = 2; x <= (int)sqrt((double)n); x++) {
		if ( n % x == 0 ){
			return 0;
		}
	}
	return 1;
//判断n是否为素数， 若n为素数，本函数返回1，否则返回0 
} 
int main(int argc, const char *argv[])
{
	int m,n;
	scanf("%d %d",&m,&n);
	//遍历m到n之间的每个数字并输入到prime进行判断
	int i;
	for ( i = m; i <= n; i++) {
		if ( i < 2 ) {
			i = 2;
		}
		if( prime(i) ){
			printf("%d ",i);
		}
	}
	
	return 0;
}
