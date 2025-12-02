#include <stdio.h>
#include <string.h>

int main() {
    int t, q = 0;
    int state[9][2] = { {7, 1}, {2, 8}, {3, 8}, {3, 4}, {7, 5}, {6, 5}, {3, 0}, {8, 0}, {8, 8} };
    char n[205];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", n);
        q = 0;
        int len = strlen(n);
        
        for (int j = 0; j < len; j++) {
            int input = n[j] - '0';
            if (input != 0 && input != 1) {
                q = 8;
                break;
            }
            q = state[q][input];
        }
        
        if (q == 0 || q == 4 || q == 5)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}