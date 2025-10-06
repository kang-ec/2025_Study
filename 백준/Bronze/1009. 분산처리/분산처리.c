#include <stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);
    for (int i=0 ; i<t ; i++) {
        scanf("%d %d", &a, &b);
        int c = a;
        b = b % 4 + 4;
        for (int j=1 ; j<b ; j++) {
            c = c * a % 10;
        }
        if (c%10 == 0)
            printf("10\n");
        else
            printf("%d\n", c%10);
    }
    return 0;
}