#include <stdio.h>

int arr[50][50];
int n, m;

void flip(int r, int c) {
    for (int i = r; i < r + 3; i++) {
        for (int j = c; j < c + 3; j++) {
            arr[i][j] = 1 - arr[i][j]; 
        }
    }
}

int main() {
    if (scanf("%d %d", &n, &m) != 2) return 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (scanf("%1d", &arr[i][j]) != 1) return 1; 
        }
    }
    int b_val;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (scanf("%1d", &b_val) != 1) return 1;
            if (arr[i][j] == b_val) {
                arr[i][j] = 0;
            } else {
                arr[i][j] = 1;
            }
        }
    }
    int count = 0;
    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            if (arr[i][j]) { 
                flip(i, j);
                count++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j]) {
                printf("-1\n");
                return 0;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}