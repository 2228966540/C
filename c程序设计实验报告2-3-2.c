#include <stdio.h>
#include <ctype.h>
#define jian 4
int main()
{
	char a[5] = {'T','o','d','a','y'};
	int i = 0;
	for ( i = 0; i < 5; i++) {
		//判断是否为小写，判断是否为后三个字母
		if ( islower(a[i]) ) {
			if ( a[i] > 119&&a[i] < 123){
				a[i] -= (26-jian);
			}
			else {
				a[i] += jian;
			}
		}
		//判断是否为大写，并判断是否为后三个字母
		else if ( isupper(a[i]) ) {
			if ( a[i] > 87&&a[i] < 91){
				a[i] -= (26-jian);
			}
			else {
				a[i] += jian;
			}
		}
		//输入不合法时
		else {
			printf("输入错误");
			break;
		}
	}
	//遍历数组，输出字符
	int r = 0;
	for ( r = 0; r < 5; r++) {
		printf("%c",a[r]);
	}
	
	return 0;
}