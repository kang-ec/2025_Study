#include <stdio.h>
#include <math.h>

int main() {
    int n, x1, y1, r1, x2, y2, r2;
    double d;
    int result;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        if(r1 > r2)
            result = r1 - r2;
        else
            result = r2 - r1;
        if(d == 0 && r1 == r2)
            printf("-1\n");
        else if(d == r1 + r2 || result == d)
            printf("1\n");
        else if(d > result && d < r1 + r2)
            printf("2\n");
        else
            printf("0 \n");
    }
}