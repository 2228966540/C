//输入一批学生的成绩（整数），输出最高分。 
//输入包含多个非负整数和一个负整数。该负数不作为有效成绩，只表示输入结束。 
//输出一个整数，即最高分。单独占一行。 
#include <stdio.h>
int main()
{
	int max;
	scanf("%d",&max);
	
	int a;//每次读入的数
	do {
		scanf("%d",&a);
		if ( a > max ){
			max = a;
		}
	} while ( a > 0 );
	
	printf("%d",max);
	
	return 0;
}
