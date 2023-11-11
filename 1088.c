//输入数据的第一行是一个N(N <= 200)，表示有N组输入数据，接下来的N行每一行为一个11位的手机号码。 
//输出应包括N行，每行包括一个对应的短号，输出应与输入的顺序一致。 
//短号都是是 6 * 100000+手机号的后5位
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	
	char num[N][7];
	//读取后六位，并将首位替换为6
	int i = 0;
	for ( i = 0; i < N; i++) {
		scanf("%s",num[i]);
		num[i][0] = 6;
	}
	//输出每行的短号
	int r = 0;
	for ( r = 0; r < N; r++) {
		printf("%s\n",num[r]);
	}
	
	return 0;
}