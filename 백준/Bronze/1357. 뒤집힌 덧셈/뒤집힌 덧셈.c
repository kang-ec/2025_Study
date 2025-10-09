#include <stdio.h>

int Rev(int n) {
        int rev = 0;
        while (n > 0) {
            rev *= 10;
            rev = rev + n % 10;
            n /= 10;
        }
        return rev;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int num = Rev(x) + Rev(y);
    printf("%d\n", Rev(num));
    return 0;
}