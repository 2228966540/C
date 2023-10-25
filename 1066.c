//输入一行字符，以回车符作为输入结束的标志。统计其中英文字母、数字字符和其他字符的个数。 
//多个字符，以回车符结束，回车符不作为有效字符。有效字符个数不超过100。 
//输出分3行，
#include <stdio.h>
#include <ctype.h>
int main()
{
	int i;
	char a;
	int digit = 0;
	int letter = 0;
	int other = 0;
	for ( i = 1; i <= 100; i++){
		a = getchar();
		if ( a != '\n'){
			if ( isalpha(a) ){
				letter++;
				continue;
			}
			else if ( isdigit(a) ){
				digit++;
				continue;
			}
			else {
				other++;
			}
		}
		else {
			break;
		}
	}
	
	printf("letter:%d\ndigit:%d\nother:%d\n",letter,digit,other);
	return 0;
}