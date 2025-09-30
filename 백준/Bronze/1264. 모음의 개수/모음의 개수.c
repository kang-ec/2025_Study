#include <stdio.h>

int main() {
    char str[256];

    while(1) {
        gets(str);

        if(str[0] == '#')
            break;
        
        int num = 0;
        
        for (int i=0 ; str[i]!='\0' ; i++) {
            if (str[i]=='a' || str[i]=='A') num++;
            else if (str[i]=='e' || str[i]=='E') num++;
            else if (str[i]=='i' || str[i]=='I') num++;
            else if (str[i]=='o' || str[i]=='O') num++;
            else if (str[i]=='u' || str[i]=='U') num++;
        }
        printf("%d\n", num);
    }
    return 0;
}