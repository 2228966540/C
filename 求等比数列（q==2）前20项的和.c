//首项为1的等比数列，每项是前一项的一半，如果一共有 20 项,求这个和是多少，结果用分数表示出来。
#include <stdio.h>
#include <math.h>
//#define ratio 1/2//公比为1/2
#define i 20//求前20项
#define fterm 1//首项为1
int main(int argc,char *argv[])
{
	int zi,mu;//分子和分母
	int a = i - 1;
	zi = 2 * fterm * (int)pow(2,a) - fterm;
	mu = pow(2,a);
	
	printf("%d/%d\n",zi,mu);
	return 0;
}


//如何判断可以保证分子分母互质呢？