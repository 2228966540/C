//有一学生成绩表，包括学号、姓名、3门课程成绩。请实现如下查找功能：输入一个学生的学号，输出该学生学号、姓名、3门课程成绩
//首先输入一个整数n(1<=n<=100)，表示学生人数；
//然后输入n行，每行包含一个学生的信息：学号（12位）、姓名（不含空格且不超过20位），以及3个整数，表示3门课成绩，数据之间用空格隔开。
//最后一行输入一个学号num 
//若学号num存在，输出该学生的学号、姓名、3门课程成绩；若该学号不存在，则输出“Not Found”。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct grades{
	char IDnumber[13];
	char name[21];
	int one;
	int two;
	int three;
}grade;
//读取输入的数据
void getgrade(grade *first, grade *end){
	//grade *ret = first;
	grade *p = first;
	for ( ; p <= end; p++){
		scanf("%12s",&p->IDnumber);
		scanf("%20s",&p->name);
		scanf("%d",&p->one);
		scanf("%d",&p->two);
		scanf("%d",&p->three);
		//发生了什么？让我看看！
		//printf("\nIDnumber:%s name:%s one:%d two:%d three:%d \n",p->IDnumber,p->name,p->one,p->two,p->three);
	}
	//return first;
}
//查找函数，如果有匹配值就返回对应地址，否则返回空指针
grade* research ( char x[],grade* first2, grade *end2)
{
	grade *ret = NULL;
	for ( ; first2 <= end2; first2++){
		if ( strcmp(first2->IDnumber,x) == 0 ){
			ret = first2;
		}
	}
	return ret;
}


int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	grade allgrade[n];
	//读取
	int endnumber = n - 1;
	getgrade(&allgrade[0],&allgrade[endnumber]);
	//查找
	char researchnum[13];
	scanf("%s",&researchnum);
	grade *det;
	det = research(researchnum,&allgrade[0],&allgrade[endnumber]);
	//如果查到要的人（返回值不是空指针）就打印
	if( det != NULL){
		printf("%s %s %d %d %d",det->IDnumber,det->name,det->one,det->two,det->three);
	}
	else {
		printf("Not Found");
	}
	
	return 0;
}