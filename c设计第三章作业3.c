//根据体重计算可以喝汽水的罐数
//
//一个美国政府的研究实验室得出结论，认为在汽水中常用的人造甜味剂会导致实验室老鼠的死亡。
//。已知实验时，杀死一只老鼠所用的人造甜味剂是5g，老鼠的重量为35g。假设老鼠的致死量（lethal dose）成比例对应于人的致死量。
//一罐汽水350g，其中所含的人造甜味剂占0.1%。输入你的朋友的体重(Kg)，输出他最多可以喝的汽水的罐数。
//样例1
//输入：45
//输出：喝18367罐汽水可杀死你！
//输入：75
//输出：喝30612罐汽水可杀死你！
#include <stdio.h>
#include <math.h>
#define colaweight 350.0
int main()
{
	//人的体重（g）
	long int weight;
	scanf("%ld",&weight);
	weight *= 1000;
	//每罐汽水的甜味剂含量
	long double sweet;
	sweet = colaweight / 1000;
	
	long int can;
	can = 5 * weight / ( 35 * sweet );
	
	printf("喝%d罐汽水可杀死你！",can);
}