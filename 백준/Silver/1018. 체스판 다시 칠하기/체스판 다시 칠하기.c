#include <stdio.h>

int minimum(int a, int b) {
    int m = (a < b ? a : b);
    return m;
}
 
int main(void)
{
    char arr[51][51];
    int a, b, n, m, bl, wh, min = 64;
    scanf("%d %d", &n, &m);
    int i = 0, j = 0;
    while (i < n) {
        scanf("%s", arr[i]);
        i++;
    }
    i = 0;
    while (i + 7 < n) {
        j = 0;
        while(j + 7 < m) {
            bl = 0;
            wh = 0;
            a = i;
            while (a < i + 8) {
                b = j;
                while (b < j + 8) {
                    if ((a + b) % 2 == 0) {
                        if (arr[a][b] == 'B')
                            wh++;
                        else bl++;
                    }
                    else {
                        if (arr[a][b] == 'B')
                            bl++;
                        else wh++;
                    }
                    b++;
                }
                a++;
            }
            min = minimum(min, bl);
            min = minimum(min, wh);
            j++;
        }
        i++;
    }
    printf("%d", min);
    return 0;
}