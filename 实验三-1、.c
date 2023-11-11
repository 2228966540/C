//编写程序，输入一个4位十进制整数，分别输出千位、百位、十位及个位上的数。
//（注：首先判断输入的数是否是四位数即在[1000，9999]范围内）
#include <stdio.h>
#include <string.h>
int main()
{
	char a[5];
	scanf("%s",a);
	
	if ( strlen(a) == 4&&a[0] != '0') {
		printf("%c %c %c %c",a[0],a[1],a[2],a[3]);
	}
	else {
		printf("wrong input!\n");
	}	
	
	return 0;
}