//输入一个整数n，（2<=n<=20）,输出一个空心菱形，其中每个边由n个'*'组成。 
//输入包含一个整数,n（2<=n<=20） 
//输出一个空心菱形，每个边由n个'*'组成 
#include <stdio.h>
int main()
{
	int n,t;
	scanf("%d",&n);
	t = 2 * n - 1;//行数列数
	int m,n;
	for ( m=0; m<t ; m++){
		for ( n=0 ; n<t ; n++){
			
		}
	}
	return 0;
}


//#include <stdio.h>
//int main()
//{
//    int i, j, k;
//    int n;
//    scanf("%d", &n);
//    for (i = 0;i < n;i++)
//    {
//        for (j = n - 1 - i;j > 0;j--)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i,j,k;
//    int n;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//       for(j=0;j<i;j++)
//       {
//          printf(" ");
//       }
//       printf("*\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, j, k;
//    int n,m;
//    scanf("%d%d", &n,&m);
//    for (i = 0;i < n;i++)
//    {
//        for (j = 0;j < m;j++)
//        {
//            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

