//公鸡五文钱一只，母鸡三文钱一只，小鸡三只一文钱，用100文钱买100只鸡
//给定一个正整数n，用n文钱买n只鸡，问公鸡、母鸡、小鸡各买多少只？ 
//输入一个正整数n(n<=100)。 
//如果有解，种组合占一行，包含公鸡、母鸡、小鸡的个数，用正整数表示，每个数据占4列。
//公鸡母鸡小鸡个数均大于等于0，按公鸡数目从小到大输出，公鸡数目相同按母鸡数目从小到大输出，以此类推。如果无解，输出“No Answer”。  
#include <stdio.h>
int main()
{
	int cock,hen,chick3;//公鸡的数量 母鸡的数量 小鸡的数量的三分之一
	int n,num;//n文钱买num只鸡，且n==m
	scanf("%d",&n);
	num = n;
	int ret = 0;//至少成功一次的话ret不等于0
	
	for ( cock = 0; cock < 20; cock++){
		for ( hen = 0; hen <= 33; hen ++){
			for ( chick3 = 0; chick3 <= 100; chick3++){
				if ( cock + hen + chick3*3 ==n&&5*cock + 3*hen + chick3 == n){ //100文钱必须用完的话后面那个要等于100，不必须的话小于等于即可
				//n是输入的！不是固定的100，最开始写的时候把条件表达式里面写成==100了！！！！！！！！！！
					printf("%4d%4d%4d\n",cock,hen,chick3*3);
					ret = 1;
				}
			}
		}
	}
	if ( ret == 0 ) {
		printf("No Answer\n");
	}
	
	return 0;
}