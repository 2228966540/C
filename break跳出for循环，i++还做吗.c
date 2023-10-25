//用break跳出for循环，i++还做吗
#include <stdio.h>
int main()
{
	int i = 1;
	int a = 1;
	for ( i = 1; i < 3; i++){
		break;
	}
	printf("%d",i);
	return 0;
}