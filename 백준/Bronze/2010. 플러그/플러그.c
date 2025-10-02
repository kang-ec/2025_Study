#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num, result = 0;
    for (int i=0 ; i<n ; i++) {
        scanf("%d", &num);
        result += num;
    }
    result = result - (n-1);
    printf("%d", result);
    return 0;
}