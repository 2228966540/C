//已知不等式 1！+2！+3！+...+m！‹n,请编程对用户指定的n值计算并输出满足该不等式的m的整数解。 
//输入一个整数n，n为int范围内的正整型。 
//输出m的取值范围 如m<=12
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i = 1;
	int p = 1;
	long long int sum = 0;
	int a;
	for ( i = 1; i <= n; i++){
		a = 1;
		p = 1;//a和p都要重新赋值的！
		for ( p = 1; p <= i; p++){
			a = a * p;
		}

		sum += a;
//		if ( sum == n ){
//			i--;
//			break;
//		}
		if ( sum >= n ){
			break;
		}
	}
	i--;
	
	printf("m<=%d",i);
	return 0;
}

//sum好像溢出了，解决方法是把n和sum的类型换成longlong
//二次修正：当n==2时错误输出2，在第一个for让i<=1
//三次修正，因为i最后多加一次，但是已经跳出循环无法执行i--，把i--移出循环
//n的值改回来，另外异常的原因是p带着上次循环的数值进下一次循环了，在循环开头重新赋值即可
