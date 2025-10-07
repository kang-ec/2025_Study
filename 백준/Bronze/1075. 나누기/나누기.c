#include <stdio.h>

int main() {
    int n, f;
    scanf("%d\n %d", &n, &f);
    n = n / 100;
    n = n * 100;
    for (int i=0 ; i<100 ; i++) {
        if ((n+i) % f == 0) {
            printf("%02d\n", i);
            return 0;
        }
    }
}