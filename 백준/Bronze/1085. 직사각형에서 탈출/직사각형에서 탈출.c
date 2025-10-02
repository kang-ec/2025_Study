#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int min=0;
    if (y <= (h-y) && y <= x && y <= (w-x))
        printf("%d", y);
    else if ((h-y) <= y && (h-y)<=x && (h-y)<=(w-x)) {
        min = h-y;
        printf("%d", min);
    }
    else if (x <=y && x<=(h-y) && x<=(w-x))
        printf("%d", x);
    else {
        min = w-x;
        printf("%d", min);
    }
    return 0;
}