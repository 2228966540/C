//*p与p
#include <stdio.h>
int main()
{
	char a[] = {0,1,2,3,4,5,6,-1};
	int *p;
	char *q;
	q = a;
	printf("%d",*q);
		
//	while( *p != -1 ) {
//		printf("a[p]=%d\n",*p);
//		*p++;
//	}
	
	return 0;
}