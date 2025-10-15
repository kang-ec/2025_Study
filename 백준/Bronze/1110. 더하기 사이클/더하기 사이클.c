#include <stdio.h>

int main() {
    int n, k, cycle=0;
    scanf("%d", &n);
    k = n;
    while(1) {
        if (k<10)
            k*=11;
        else
            k = k % 10 * 10 + (k / 10 + k % 10) % 10;
        cycle++;
        if (n==k)
            break;
    }
    printf("%d", cycle);
    return 0;
}