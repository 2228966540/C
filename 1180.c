//学生信息包括学号、姓名、3门课的成绩，计算每个学生的总分，输出总分最高的学生的信息。
//首先输入一个整数n(1<=n&&n<=100)，表示学生人数，
//然后输入n行，每行包含一个学生的信息：学号（12位）、姓名（不含空格且不超过20位），以及三个整数，表示语文、数学、英语三门课成绩，数据之间用空格隔开。
// 输出总成绩最高的学生的学号、姓名、及三门课成绩，用空格隔开。若有多个最高分，只输出第一个。
#include <stdio.h>
typedef struct studentdata{
	char number[13];//当字符串来读取
	char name[20];
	int china;
	int math;
	int english;
}data;
//读取函数
void getdata(struct studentdata* first,struct studentdata* end)
{
	struct studentdata *p = first;//指向最开头
	for( ; p <= end; p++){	
		scanf("%s",&p->number);
		scanf("%s",&p->name);
		scanf("%d",&p->china);
		scanf("%d",&p->math);
		scanf("%d",&p->english);
	}	
}
//主函数
int main(int argc,char const * argv[])
{
	int n;
	scanf("%d",&n);
	//一个叫alldata的有n个空间的数组，每个空间里面放了一个studentdata形式的结构体
	struct studentdata alldata[n];	
	int oo = n - 1;
	//读取
	getdata(&alldata[0],&alldata[oo]);//传入首地址和尾地址
	int r = 0;
	//现在要做的是加出来每个结构体内的总分，比较，把大的存到一个专门的结构体里面
	data output = alldata[0];
	int maxgrade = output.china + output.english + output.math;
	for ( r = 1; r < n; r++){
		int grade = alldata[r].china + alldata[r].english + alldata[r].math;
		if ( maxgrade < grade ){
			output = alldata[r];
			maxgrade = grade;
		}
	}
	//打印第一个出现的最高分的学生的信息
	printf("%s %s %d %d %d",output.number,output.name,output.china,output.math,output.english);
	
	return 0;	
} 

//我现在是想把存放了n个studentdata形式结构体的数组的首尾地址传入读取函数，让函数去读取数据存放到指向的位置，然后再在主函数内使用这个数组（OK了已经，加个&就可以）

//struct studentdata* getdata(struct studentdata *p)
//{
//	scanf("%s",&p->number);
//	scanf("%s",&p->name);
//	scanf("%d",&p->china);
//	scanf("%d",&p->math);
//	scanf("%d",&p->english);
//}