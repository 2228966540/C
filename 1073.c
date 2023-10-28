#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	
	int chicken = -2;
	int rabbit = -2;
	int a = 0;
	a = m * 4;
	a -= n;
	if ( a % 2 == 0&&(a / 2) <= m){
		chicken = a / 2;
		rabbit = m - chicken;
	}

	
	if ( chicken >= 0&&rabbit >= 0&&chicken <= m&&rabbit <= m){	
	printf("%d %d",chicken,rabbit);
	}
	else {
		printf("No Answer\n");
	}
	return 0;
}