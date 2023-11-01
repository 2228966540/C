//乘车不超过2km收费8元（起步价），多于2km不超过4km的部分，每公里收费1.5元，4km以上的部分每公里2元。
//张某某从住处乘车坐出租车去学校，车程10km。编程计算车费。
#include <stdio.h>
int main(void)
{
	double money;
	//输入里程数
	double distance;
	scanf("%lf",&distance);
	
	if ( distance <= 2 ) {
		money = 2*distance;
	}
	
	else if ( distance > 2&&distance <= 4 ) {
		money = 8 + (distance - 2) * 1.5;
	}
	
	else {
		money = 8 + 2 * 1.5 + (distance - 4) * 2;
	}
	
	printf("%.2f",money);
	
	return 0;
}