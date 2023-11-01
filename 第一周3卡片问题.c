//现在小蓝手里有 0 到 9 的卡片各 2021 张，共 20210 张，请问小蓝可以从 1 拼到多少？
#include <stdio.h>
int main()
{
	//初始化一个数组，共十个单元，分别对应0-9共十种数字卡片的个数
	int num[10];
	int a = 0;
	for ( a = 0; a < 10; a++){
		num[a] = 2021;
	}
	
	//从一开始一个一个试
	int i = 1;
	int ones;//个位
	int x;//用来接收待处理的数
	for ( ; ; i++){
		x = i;
		while(x){
			ones = x % 10;//取出个位
			if ( num[ones] != 0 ){
				num[ones]--;
			}
			else {
				i--;
				goto stopp;
			}
			x /= 10;//让十位变成个位
		}
		
	}
stopp:
	printf("%d",i);
	
	return 0;
}