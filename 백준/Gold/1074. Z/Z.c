#include <stdio.h>

int main() {
        int n, r, c;
        scanf("%d %d %d", &n, &r, &c);
        int result = 0;
        float size = 1;
        int size2 = 1;
        for(int i = 0; i < n; i++)
            size *= 2;
        for(int i = 0; i < n - 1; i++)
            size2 *= 4;
        while(size > 1) {
                if(r < size / 2 && c >= size / 2) {
                        result += size2;
                        c -= size / 2;
                }
                else if(r >= size / 2 && c < size / 2) {
                        result += size2 * 2;
                        r -= size / 2;
                }
                else if(r >= size / 2 && c >= size / 2) {
                        result += size2 * 3;
                        r -= size / 2;
                        c -= size / 2;
                }
                size /= 2;
                size2 /= 4;
        }
        printf("%d\n", result);
        return 0;
}