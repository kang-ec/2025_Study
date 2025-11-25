#include <stdio.h>

int main(void) {
    long long n;
    int l;
    if (scanf("%lld %d", &n, &l) != 2)
        return 1;
    for (int i = l; i <= 100; i++) {
        long long sum = (long long)i * (i - 1) / 2;
        long long num = n - sum;
        if (num < 0) {
            printf("-1\n");
            return 0; 
        }
        if (num % i == 0) {
            long long a = num / i;
            for (int k = 0; k < i; k++) {
                printf("%lld", a + k);
                if (k < i - 1) {
                    printf(" ");
                }
            }
            printf("\n");
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}