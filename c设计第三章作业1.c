//设圆半径r = 1.5，圆柱高h = 3，求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。
//用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。请编程序。（PI取3.14）
//输入1.5(r), 3(h)
// 输出
// C1 = 9.42
// Sa = 7.07
// Sb = 28.26
// Va = 14.13
// Vb = 21.19
#define PI 3.14
#include <stdio.h>
#include <math.h>
int main()
{
    float r,h;
    float C1,Sa,Sb,Va,Vb;
    
    scanf("%f,%f",&r,&h);
    // 计算圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb
    C1 = 2 * PI * r;
    Sa = PI * pow( r,2 );
    Sb = 4 * PI * pow( r,2 );
    Va = 4 * PI * pow( r,3 ) / 3;
    Vb = PI * r * r * h;
    //输出
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f",C1,Sa,Sb,Va,Vb);
    return 0;
}

//为什么用float定义时不用初始化为零也能输出20.19，用double定义必须初始化成0才能输出20.19呢？？？？？？？？？
