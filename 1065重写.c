//输入一行字符，以回车符作为输入结束的标志。统计其中数字字符的个数。 
//多个字符，以回车符结束，回车符不作为有效字符。 
//输出一个整数，表示数字字符的个数。 
#include <stdio.h>
#include <ctype.h>
int main()
{
	int i = 1;
	int cnt = 0;
	for ( i = 1; i > 0; i++){
		char a;
		a = getchar();
		if ( a != '\n'){
			if ( isdigit(a) ){
				cnt++;
				continue;
			}//如果是数字，cnt++
			
		}
		
		else {
			break;
		}
	}
	
	printf("%d",cnt);
	return 0;
}