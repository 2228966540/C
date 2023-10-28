//有一口深度为high米的水井，井底有一只青蛙，它每天白天能够沿井壁向上爬up米，夜里则顺井壁向下滑down米，
//若青蛙从某个早晨开始向外爬，对于任意指定的high、up和down值（均为自然数），计算青蛙多少天能够爬出井口？ 
//输入3个正整数：high、up和down。 
//输出一个整数，表示天数。输出单独占一行。 
#include <stdio.h>
int main()
{
	int high,up,down,day;
	scanf("%d %d %d",&high,&up,&down);
	
	int climb = 0;//已经爬的高度
	int i = 1;//单纯为了构造一个循环
	for ( i = 1; i > 0; i++) {
		day++;
		climb += up;
		if ( climb >= high ){
			break;
		}
		climb -= down;
		
	}
	
	printf("%d\n",day);
	
	return 0;
}