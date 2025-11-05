#include <stdio.h>
 
int main() {
	int n, m, x, y, pack=1000, one=1000;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		if (x < pack)
			pack = x;
		if (y < one)
			one = y;
	}
	x = n / 6;
    y = n % 6;
    if (y * one >= pack)
        printf("%d", pack * x + pack);
    else if (one * 6 < pack)
        printf("%d", n * one);
    else
        printf("%d", x * pack + y * one);
	return 0;
}