#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, n, result = 0;
    scanf("%d %d %d", &a, &b, &n);
    for(int i = 0 ; i < n ; i++) {
        a = (a % b) * 10;
        result = a / b;
    }
    printf("%d", result);
    return 0;
}