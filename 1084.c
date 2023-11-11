//这个题大概不能用动态内存分配吧？？？？？？？？？？？？？？？？？？？？？？？？？？
//输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
//输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。  
//对于每组输入数据，输出一行，结果保留两位小数。 、
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double *data = NULL;
	int cnt = 0;//数组计数用
	double x1,y1,x2,y2;//两个点的坐标
	double instance;//这两个点的距离
	//读取每行给出的两点坐标，计算出两点间的距离，并存放到data中
	//但是我不知道循环结束的条件怎么写
	
	//scanf 函数在成功读取数据时返回读取的参数数量，如果没有成功读取任何数据，则返回0。
	//scanf()函数执行成功时的返回值是成功读取的变量数,也就是说，你这个scanf()函数有几个变量，如果scanf()函数全部正常读取，它就返回几
	//scanf的返回值是函数成功转换并存储于参数中的值的个数
	
	while ( (scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)) != 4 ) {
		instance = sqrt( pow(x1-x2,2) + pow(y1-y2,2) );
		
		data = (double *)realloc( data, (cnt+1)*sizeof(double) );//sizeof(int)是不对的
		data[cnt] = instance;
		cnt++;
	}
	//遍历data并打印分别每行所给的两点坐标的距离
	int i;
	for ( i = 0; i <= cnt; i++) {
		printf("%.2f\n",data[i]);
	}
	
	free(data);
	return 0;
}
