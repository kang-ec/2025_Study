#include <stdio.h>

int main() {
    int n, cost, Y = 0, M = 0;
    scanf("%d", &n);
    for (int i=0 ; i<n ; i++) {
        scanf("%d", &cost);
        Y += cost / 30 + 1;
        M += cost / 60 + 1;
    }
    Y *= 10;
    M *= 15;

    if (Y==M)
        printf("Y M %d", Y);
    else if (Y>M)
        printf("M %d", M);
    else
        printf("Y %d", Y);
    return 0;
}