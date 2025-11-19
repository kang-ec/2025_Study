#include <stdio.h>

int main() {
    int n, k, arr[5001] = {0, }, a;
    scanf("%d %d", &n, &k);
    a = k;
    printf("<%d", a);
    arr[a] = 1;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<k; j++) {
            while(1) {
            a++;
            if(a > n) a = 1;
            if(!arr[a]) break;
            }
        }
        printf(", %d", a);
        arr[a] = 1;
   }
   printf(">");     
}