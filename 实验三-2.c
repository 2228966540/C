//若一次购买不少于100套，则每套88元；
//若不足100套，则每套98元；
//只买上衣每件66元；
//只买裤子每条48元。
//请编程读入所买上衣c和裤子t的件数，计算应付款数m。
#include <stdio.h>
int min(int x,int y);
int main()
{
	int tops,pants;//上衣和裤子的数量
	int set;//能凑成的套数
	long int money;
	int setmoney;//一套衣服单价
	//读取上衣和裤子的数量并判断输入合法性
	scanf("%d %d",&tops,&pants);
	if ( tops < 0||pants < 0 ) {
		printf("wrong input!\n");
		goto end1;
	}
	//判断每套衣服单价
	set = min(tops,pants);
	tops -= set;
	pants -= set;
	if ( set >= 100 ) {
		setmoney = 88;
	} 
	else {
		setmoney = 98;
	}
	//计算总钱数
	money = tops * 66 + pants * 48 + setmoney * set;
	printf("%ld",money);
end1:	
	return 0;
}
int min(int x,int y)
{	
	int ret;
	if ( x <= y ) {
		ret = x;
	}
	else {
		ret = y;
	}
	
	return ret;
}