#include <stdio.h>

int main() {
    int x, cnt = 0;
    scanf("%d", &x);
    while (x > 0) {
        if (x % 2 == 1)
            cnt ++;
            x /= 2;
        }
    printf("%d", cnt);
    return 0;
}