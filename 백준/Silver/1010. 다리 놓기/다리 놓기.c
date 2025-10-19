#include <stdio.h>

int main() {
    int t, n, m, result;
    scanf("%d", &t);
    for (int i=0; i<t; i++) {
        scanf("%d %d", &n, &m);
        result = 1;
        for (int j=0; j<n; j++) {
            result *= m-j;
            result /= 1+j;
        }
        printf("%d\n", result);
    }
    return 0;
}