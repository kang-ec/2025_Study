#include <stdio.h>

int main() {
    int a[50], b[50];
    int n, cnt, result=0;
    scanf("%d", &n);
    for (int i=0 ; i<n ; i++)
        scanf("%d", &a[i]);
    for (int i=0 ; i<n ; i++)
        scanf("%d", &b[i]);
    for (int i=0 ; i<n-1 ; i++){
        for (int j=0 ; j<n-(1+i) ; j++){
            if (a[j] < a[j+1]) {
                cnt = a[j];
                a[j] = a[j+1];
                a[j+1] = cnt;
            }
        }
    }

    for (int i=0 ; i<n-1 ; i++) {
        for (int j=0 ; j<n-(1+i) ; j++) {
            if (b[j] > b[j+1]) {
                cnt = b[j];
                b[j] = b[j+1];
                b[j+1] = cnt;
            }
        }
    }

    for (int i=0 ; i<n ; i++)
        result += a[i] * b[i];
    printf("%d", result);
    return 0;
}