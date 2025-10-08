#include <stdio.h>

int main() {
    char chess[8][8];
    int n=0;

    for (int i=0 ; i<8 ; i++) {
        scanf("%s", chess[i]);
    }
    for (int j=0; j<8; j++) {
		for (int k=0; k<8; k++) {
			if ((chess[j][k] == 'F') && ((j + k) % 2 == 0))
				n++;
		}
	}

	printf("%d", n);
    return 0;
}