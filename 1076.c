//已知xyz+yzz=n，其中n是一个正整数，x、y、z都是数字（0-9），编写一个程序求出x、y、z分别代表什么数字。如果无解，则输出“No Answer” 
//输入一个正整数n。 
//输出一行，包含x、y、z的值，每个数值占4列。 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int ret = 0;//至少找出一解，ret才能为1
	int x,y,z;//注意是三位数，百位不能为零！！！！！！！
	
	for ( x = 1; x <= 9; x++){
		for ( y = 1; y <= 9; y++){
			for ( z = 0; z <= 9; z++){
				if( x*100 + y*10 + z + y*100 + z*10 + z == n){
					printf("%4d%4d%4d\n",x,y,z);
					ret = 1;
				}
			}
		}
	}
	
	if ( ret == 0 ){
		printf("No Answer\n");
	}
	
	return 0;
}