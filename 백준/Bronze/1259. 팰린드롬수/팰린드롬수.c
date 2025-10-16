#include <stdio.h>
#include <string.h>

int main() {
    int n, p;
    char str[6];
    while (1){
        scanf("%s", str);
        if (str[0] == '0') break;
        p = 1;
        n = strlen(str);
        for (int i = 0; i < n/2 + 1; i++){
            if (str[i] == str[n-1]){
                n--;
            }
            else{
                p = 0;
                break;
            }
        }

        if (p)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}