#include <stdio.h>
int main()
{
	int t;
	int a,b,c,d;
	scanf("%d",&t);
	//建立一个数组来存储每行运算结果
	int ret[t];
	
	int i = 0;
	for ( i = 0; i < t; i++) {
		scanf("%d %d %d %d",&a,&b,&c,&d);
		//分别比较杨和另外三个人跑的距离
		ret[i] = 0;
		if ( a < b ){
			ret[i]++;
		}
		
		if ( a < c ){
			ret[i]++;
		}
		
		if ( a < d ){
			ret[i]++;
		}	
	}
	
	int q = 0;
	for ( q = 0; q < t; q++) {
		printf("%d\n",ret[q]);
	}
	
	return 0;
}