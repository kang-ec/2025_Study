#include <stdio.h>
#include <stdlib.h>

int c(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n, m, t = 0, l;
    int k[50], b[10000], p[50];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &k[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    
    qsort(k, n, sizeof(int), c);
    qsort(b, m, sizeof(int), c);

    if (k[0] < b[0]) {
        printf("-1\n");
        return 0;
    }

    l = m;
    while (l > 0) {
        t++;
        for (int i = 0; i < n; i++) {
            while (p[i] < m) {
                if (b[p[i]] == -1) {
                    p[i]++;
                    continue;
                }
                
                if (k[i] >= b[p[i]]) {
                    b[p[i]] = -1;
                    l--;
                    p[i]++;
                    break;
                }
                p[i]++;
            }
        }
    }

    printf("%d\n", t);
    
    return 0;
}