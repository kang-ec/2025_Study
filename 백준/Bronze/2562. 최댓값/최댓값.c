#include <stdio.h>

int main() {
    int a=0, num[9], n;
    for (int i=0 ; i<9 ; i++) {
        scanf("%d", &num[i]);
        if (a < num[i]) {
            a = num[i];
            n = i;
        }   
    }
    printf("%d\n%d", a, n+1);
    return 0;
}