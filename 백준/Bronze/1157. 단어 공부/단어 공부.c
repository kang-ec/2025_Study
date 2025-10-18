#include <stdio.h>
#include <string.h>

int main() {
    char n[1000001];
    int alphabet[26];
    scanf("%s", n);
    
    int len = strlen(n);
    
    for (int i = 0; i < len; i++) {
        if (n[i] >= 'a')
            alphabet[n[i] - 'a']++;
        else
            alphabet[n[i] - 'A']++;
    }
    int max = -1;
    char result = '?';
    
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == max)
            result = '?';
        else if(alphabet[i] > max) {
            max = alphabet[i];
            result = 'A' + i;
        }
    }
    
    printf("%c\n", result);
    
    return 0;
}