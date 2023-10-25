//输入n和a，求a+aa+aaa+…aa…a(n个a)，如当n=3,a=2时，2+22+222的结果为246 
//包含两个整数，n和a,含义如上述，你可以假定n和a都是小于10的非负整数 
//输出前n项和，单独占一行 
#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d %d",&n,&a);
	int i = 1;
	int sum = 0;
	int t = 1;
	long long int num[n];
	for ( i=1; i<=n ;i++){
		t = 1;//恢复t的值
		for ( t=1; t<=i; t++){
			sum *= 10;
			sum += a;
		}//求出一项的值，
		num[i-1] = sum;//把求出的值存入数组
		sum = 0;//清楚sum中的临时值
	}
	
	int r;
	long long int ret = 0;
	for ( r=0; r<n; r++){
		ret += num[r];
		//printf("%lld\n",num[r]);
	}
	
	printf("%lld",ret);
	
	return 0;
}