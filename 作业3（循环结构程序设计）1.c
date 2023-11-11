//求1!+2!+…+20!，其中x!=1*2*…*x，表示阶乘。
#include <stdio.h>
int main()
{
    int i = 1;
    long int n = 0;
    int j = 0;
    long int a = 1;
    long int sum = 0;
    scanf("%ld",&n);
    
    for ( i = 1; i <= n; i++) {
        a = 1;
        for ( j = 1; j <= i; j++){
            a *= j;
        }
        sum += a;
    }
    
    printf("%ld",sum);
    
    return 0;
}

