//从键盘输入一批字符，占一行，以@结束。 
//输出占一行
//加密规则:
//1）所有字母均转换为小写。
//2）若是字母'a'到'y'，则转化为下一个字母。
//3）若是'z'，则转化为'a'。
//4）其它字符，保持不变。 
#include <stdio.h>
#include <ctype.h>
int main()
{
	int i = 1;
	for ( i = 1; i > 0; i++){
		char a;
		a = getchar();
		if ( a != '@'){
			if ( isdigit(a) ){
				putchar(a);
			}//如果是数字，直接输出
			
			if ( isspace(a) ){
				putchar(a);//还要考虑输入了空白字符！！！！！！！！！
			}
			if ( isupper(a) ){
				a = tolower(a);
			}//如果是大写，变成小写，但是不要输出！！！！！！！！！！！
			
			if ( a == 122 ){
				char u = a;
				u = u - 25;
				putchar(u);
			}//z的ASCII码是122
			
			if ( a >= 97&&a <= 121){
				char v = a;
				v = v + 1;
				putchar(v);
			}
			if ( ispunct(a) ){
				putchar(a);
			}//其他奇奇怪怪的符号
		}
		
		else {
			break;
		}
	}
	return 0;
}