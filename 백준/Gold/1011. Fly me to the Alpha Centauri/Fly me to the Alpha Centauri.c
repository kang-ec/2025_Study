#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        y -= x;
        int z = 1;
        long long sum = 0;
        while(y > sum + z * 2) {
            sum += z * 2;
            z++;
        }
        if (sum + z >= y)
            printf("%d\n", 2 * z - 1);
        else
            printf("%d\n", 2 * z);
    }
    return 0;
}