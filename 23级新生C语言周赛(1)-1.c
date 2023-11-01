//需要判断这n炷香的长度是否能形成一个等差数列，而且考虑到卡苟的身高，这n炷香中每一炷香的长度都不能超过卡勾的身高h，
//第一行两个正整数 n，h。表示n炷香以及卡苟的身高 (2<=n<=1000,-1e18<=h<=1e18 )
//第二行n个数(a1,a2,...,ai,...,an)(-1e18<=ai<=1e18)表示n炷香的长度  
//如果符合仪式的要求，输出”我要易大山啦!”
//否则输出“像一直在被优化，没队要的是我”。


#include <stdio.h>
int main()
{
	int n;
	long long int h;
	scanf("%d %lld",&n,&h);
	//开辟一个数组来存放输入的香的高度
	long long int num[n];
	//遍历数组并读取输入
	int i = 0;
	for ( i = 0; i < n; i++){
		scanf("%lld",&num[i]);
		if ( num[i] > h){
			goto false1;
		}
	}
	//判断是否是等差数列
	long long int d;//公差
	int r = 1;
	d = num[0] - num[1];
	for ( r = 2; r < n; r++) {
		if ( num[r-1] - num[r] != d ) {
			goto false1;
		}
	}
	printf("我要易大山啦!\n");
	return 0;
	
//不符合条件goto这里
false1:
	printf("像一直在被优化，没队要的是我\n");
	
	return 0;
}