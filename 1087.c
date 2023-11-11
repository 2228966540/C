//多实例测试。首先输入一个整数n，表示测试实例的个数，然后是n行，每行是一个18位身份证号。 
//对于输入的每个身份证号，输出一行，即其对应的出生日期，输出格式为：yyyy-mm-dd。 
#include <stdio.h>
#include <stdlib.h>
int main(int argc,const char *argv[])
{
	int n;
	scanf("%d",&n);
	char num[n][19];
	//input
	int a;
	for ( a = 0; a < n; a++){
		scanf("%s",&num[a]);
	}
	//output
	int b;
	int yearstart = 6;//年份起始位置
	int lengthyear = 4;//年份长度
	int monthstart = 10;//月份起始位置
	int daystart = 12;//日起始位置
	int length2 = 2;//月、日的长度
	for ( b = 0; b < n; b++){
		printf("%.*s-%.*s-%.*s\n", lengthyear,&num[b][yearstart],length2,&num[b][monthstart],length2,&num[b][daystart]);
	}
	
	return 0;
}