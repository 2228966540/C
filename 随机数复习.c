//整个随机数小程序玩玩


//先弄用当前时间版本的
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand(time(0));
//	int a = rand();
//	int b = a % 60 + 200;//要200到260之间的一个随机数
//	printf("%d",b);
//	return 0;
//}
//测试通过

//现在是用进程pid当种子值
#include <stdio.h>
#include <unistd.h>//新的头文件
#include <stdlib.h>
int main()
{
	srand((unsigned int)getpid());
	int a = rand();
	double b = (double)(a%60)/100;
	printf("%f",b);
	return 0;
}