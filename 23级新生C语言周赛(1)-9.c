#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while ( t > 0 ) {
        int n;
        scanf("%d", &n);

        // 如果石子数n能被3整除，那么Bob获胜，否则Alice获胜
        if (n % 3 == 0) {
            printf("Bob\n");
        } else {
            printf("Alice\n");
        }
        t--;
    }

    return 0;
}
