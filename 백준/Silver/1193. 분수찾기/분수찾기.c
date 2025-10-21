#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k = 1;
    while (1) {
        if (k * (k - 1) / 2 < n && n <= k * (k + 1) / 2)
            break;
        k++;
    }
    int x = k * (k + 1) / 2 - n;
    if ((k  % 2) == 0)
        printf("%d/%d", k - x, 1 + x);
    else 
        printf("%d/%d", 1 + x, k - x);
    return 0;
}