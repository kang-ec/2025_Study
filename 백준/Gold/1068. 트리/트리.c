#include <stdio.h>
#define MAX 50
#define T 1
#define F 0

int n, d, r = -1, l = 0;
int p[MAX];

void func(int c) {
    if (c == d)
        return;
    int a = F;
    for (int i = 0; i < n; ++i) {
        if (p[i] == c) {
            if (i != d) {
                a = T;
                func(i);
            }
        }
    }
    if (a == F)
        l++;
}

void solve() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &p[i]);
        if (p[i] == -1)
            r = i;
    }
    scanf("%d", &d);
    if (d == r) {
        printf("0\n");
        return;
    }
    if (r != -1)
        func(r);
    printf("%d\n", l);
}

int main() {
    solve();
    return 0;
}