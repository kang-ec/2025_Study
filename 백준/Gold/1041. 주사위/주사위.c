#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int n;
int dice[6];
int min3, min2, min1, max1;
long long answer = 0;

int main() {
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 0; i < 6; i++) {
        if (scanf("%d", &dice[i]) != 1) return 1;
        answer += dice[i];
    }

    min1 = dice[0];
    max1 = dice[0];
    min2 = dice[0] + dice[1];
    min3 = dice[0] + dice[1] + dice[2];

    if (n == 1) {
        for (int i = 1; i < 6; i++) {
            max1 = MAX(max1, dice[i]);
        }
        printf("%lld\n", answer - max1);
        return 0;
    }
    
    for (int i = 1; i < 6; i++) {
        min1 = MIN(min1, dice[i]);
    }
    
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (i + j == 5) {
                continue;
            }
            min2 = MIN(min2, dice[i] + dice[j]);
            
            for (int k = j + 1; k < 6; k++) {
                if (j + k == 5 || k + i == 5) {
                    continue;
                }
                min3 = MIN(min3, dice[i] + dice[j] + dice[k]);
            }
        }
    }
    
    answer = 0;
    answer += (5LL * n * n - 16LL * n + 12LL) * min1;
    answer += 4LL * min3;
    answer += (8LL * n - 12LL) * min2;
    
    printf("%lld\n", answer);
    
    return 0;
}