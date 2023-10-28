//总计n个人，在一家饭店里吃饭，共花了cost先令，每个男人各花3先令，每个女人各花2先令，每个小孩各花1先令，
//输入两个正整数，表示人数n和花费cost。 
//若问题有解，则输出所有解，每行输出三个数据，代表男人、女人和小孩的人数，用空格分隔；若问题无解，则输出“No answer"。 
#include <stdio.h>
int main()
{
	int n,cost;
	scanf("%d %d",&n,&cost);
	
	int ret = 0;//至少找出一解，ret才能为1
	int man,woman,child;
	
	for ( man = 0; man <= cost/3; man++){
		for ( woman = 0; woman <= cost/2; woman++){
			for ( child = 0; child <= cost; child++){
				if( man + woman + child == n&&man*3 + woman * 2 + child == cost){
					printf("%d %d %d\n",man,woman,child);
					ret = 1;
				}
			}
		}
	}
	
	if ( ret == 0 ){
		printf("No answer\n");
	}
	
	return 0;
}