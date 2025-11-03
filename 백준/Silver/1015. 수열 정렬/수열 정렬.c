#include <stdio.h>

int p[50];

int main() {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for(int i = 0; i < n - 1; i++) {
                for(int j = i + 1; j < n; j++) {
                        if(a[i] <= a[j]) p[j]++;
                        else p[i]++;
                }
        }

        for(int i = 0; i < n; i++) printf("%d ", p[i]);
        printf("\n");
        return 0;
}