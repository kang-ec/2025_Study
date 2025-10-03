#include <stdio.h>

int main() {
    int n, k, num=0;
    scanf("%d %d", &n, &k);
    for (int i=1 ; i<=n ; i++) {
        if (n%i == 0) {
            num++;
            if (num==k) {
                printf("%d", i);
                return 0;
            }
        }
    }
    printf("0");
    return 0;
}