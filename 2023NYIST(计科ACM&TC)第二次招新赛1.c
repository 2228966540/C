//输入
//第一行包含一个整数 n ( 1 ≤ n ≤ 100 ) - 字符串中的字符数。
//第二行包含字符串。字符串仅由大写和小写拉丁字母组成。
//输出
//如果字符串是pangram，则输出"是"，否则输出"否"。
#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char string[101];
    scanf("%s", string);

    // 把字符串中的字母转换为小写
    for (int i = 0; string[i]; i++) {
        string[i] = tolower(string[i]);
    }

    // 创建一个数组用来存储每种字母出现的次数
    int letter[26] = {0};

    // 遍历字符串中的字符，哪种出现就让哪种对应的数组为1，a对应letter[0]
    for (int i = 0; i<n ; i++) {
        if (isalpha(string[i])) {
            int r = string[i] - 'a';
            letter[r] = 1;
        }
    }

    // 检查唯一字母的数量是否等于26
    int q;
    int ret = 1;
    for ( q = 0; q < 26; q++ ) {
    	if ( letter[q] == 0 ){
    		ret = 0;
    		break;
		}
	}
	if ( ret == 1 ){
		printf("是\n");
	}
	else {
		printf("否\n");
	}


    return 0;
}
