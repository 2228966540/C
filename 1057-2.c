//输入一个正整数n，判断n是否是素数，若n是素数，输出”Yes”,否则输出”No”。 注意：1不是素数。 
//输入一个正整数n(n<=1000) 
//如果n是素数输出"Yes"，否则输出"No"。输出占一行。 
#include <math.h>
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i = 2;//从2开始往上逐个判断
	double t;//作为i的上限，
	
	t = sqrt((double)n);
	int determine = 1;
	
	for ( i = 2; i <= t ; i++){
		if ( n % i == 0 ){
			determine = 0;
			break;
		}
	}
	
	if ( n == 1 ||n == 0 ){
		determine = 0;
	}//单独给0和1加一次判定
	
	if ( determine == 1){
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	
	return 0;
}