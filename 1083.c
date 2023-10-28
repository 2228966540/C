//第一次提交，提示数组越界，我直接把数组的范围从50改成150，成了，但是这样会造成不必要的浪费啊？
//一般来说，使用固定大小的数组会更快，因为它们在内存上的分配是一次性完成的
//动态内存分配会增加时间消耗，但是会减少内存占用，自己权衡吧

//统计给定的n个数中，负数、零和正数的个数 
//输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个实数；
//如果n=0，则表示输入结束，该行不做处理。 
//对于每组输入数据，输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。 
#include <stdio.h>
#include <math.h>
int main()
{
	int negative = 0;//负数的个数
	int positive = 0;//正数的个数
	int zero = 0;//零的个数
	
	int cnt = 0;//输入的行数（注意是从零开始的！！！）
	//每个类型定义一个数组来，记录每行三种类型各有多少个
	int neg[150] = {0};
	int pos[150] = {0};
	int zer[150] = {0};
		
	int n;
	float x;//输入的实数
	int i;
	int a;//读取的数
	
	while(1) {
		//在读取新的一行之前要重置正数 负数 零 的个数为零
		negative = 0;
		positive = 0;
		zero = 0;
		
		scanf("%d",&n);
		//如果n是零，结束输入，
		if ( n == 0 ) {
			cnt--;
			break;
		}
		//读取每行的实数并计数
		for ( i = 0; i < n; i++){
			scanf("%f",&a);
			//是负数
			if ( a < 0 ) {
				negative++;
			}
			//是正数		
			if ( a > 0 ){
				 positive++;
			}
			//是零
			if ( fabs(a) < 1e-6 ) {
				zero++;
			}
		}
		neg[cnt] = negative;
		pos[cnt] = positive;
		zer[cnt] = zero;
		cnt++;
	}
	//打印刚才输入的每行的负数、零、正数的个数
	int r = 0;
	for ( r = 0; r <= cnt; r++){
		printf("%d %d %d\n",neg[r],zer[r],pos[r]);
	}
	
	return 0;
}