//设计一个结构体类型，包含姓名、出生日期。其中出生日期又包含年、月、日三部分信息。输入n个好友的信息，输出年龄最小的好友的姓名和出生日期。
//首先输入一个整数n(1<=n<=10)，表示好友人数，然后输入n行，每行包含一个好友的信息：姓名（不超过20位）以及三个整数，分别表示出生日期的年月日。
//输出年龄最小的好友的姓名和出生日期，用空格隔开
#include <stdio.h>
typedef struct datas{
	char name[21];
	int year;
	int month;
	int day;
}data;
//读取数据
data * getdata(data *first,data *end)
{
	data *p = first;//指向每个位置并读取；
	data *q = first;//返回结构数组首位的地址
	for ( ; p <= end; p++){
		scanf("%s",&p->name);
		scanf("%d %d %d",&p->year,&p->month,&p->day);
	}
	return q;
}
//判断年龄最小的那个人，并返回存放这个人的信息的地址
data *determine( data *q,data *p)
{
	data *ret = q;//要返回的地址
	q++;//q先指向第二个位置的结构
	for ( ; q <= p; q++){
		//年份数值大的年龄一定更小
		if ( ret->year > q->year ){
			continue;
		}
		//ret所指的人的年份数值小于q所指的人，即ret所指的人年龄更大
		else if( ret->year < q->year ){
			ret = q;
			continue;
		}		
		//同年生
		else {
			//从月份可以判断如果ret所指的人年龄更小
			if ( ret->month > q->month ){
				continue;
			}
			//从月份可以判断如果ret所指的人年龄更大
			else if ( ret->month < q->month ){
				ret = q;
				continue;
			}
			else {
				//从天数判断ret所指的人年龄更小
				if ( ret->day > q->day ){
					continue;
				}
				else if ( ret->day < q->day){
					ret = q;
					continue;
				}
				//不考虑同年同月同日生的情况
			}
		}
	}
	return ret;
}


int main(int argc,char const * argv[])
{
	int n;
	scanf("%d",&n);
	data alldata[n];
	//读取数据
	int endnumber = n-1;
	data *out;
	out = determine( getdata(&alldata[0],&alldata[endnumber]),&alldata[endnumber] );
	//处理输出格式问题
	if ( out->month <10&&out->day >=10 ){	
		printf("%s %d-0%d-%d",out->name,out->year,out->month,out->day);
	}
	else if ( out->month >=10&&out->day <10 ){
		printf("%s %d-%d-0%d",out->name,out->year,out->month,out->day);
	}
	else if ( out->month <10&&out->day <10 ){
		printf("%s %d-0%d-0%d",out->name,out->year,out->month,out->day);
	}
	else{
		printf("%s %d-%d-%d",out->name,out->year,out->month,out->day);
	}
	return 0;
}