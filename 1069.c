//Z同学为了实现暑假去云南旅游的梦想，决定以后每天只消费1元，每花k元就可以再得到1元，一开始Z同学有M元，问最多可以坚持多少天。
//输入2个整数M, k，(2 <= k <= M <= 1000)。 
//输出一个整数，表示M元可以消费的天数。
#include <stdio.h>
int main()
{
	int cost = 0;
	int day = 0;
	int M,k;
	scanf("%d %d",&M,&k);
	
	for ( ; M > 0 ; day++){
		M--;
		cost++;
		if ( cost == k ){
			cost = 0;
			M++;
		}
	}
	
	printf("%d",day);
	
	return 0;
}
