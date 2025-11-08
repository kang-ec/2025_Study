#include <stdio.h>

int main() {
	int n, t;
	int arr[41] = {0, 1};
	scanf("%d", &t);
	int i = 2;
	while (i < 41) {
		if (arr[i] == 0)
			arr[i] = arr[i - 1] + arr[i - 2];
		i++;
	}
	i = 0;
	while (i < t)
	{
		scanf("%d", &n);
		if (n == 0) printf("1 0\n");
		else printf("%d %d\n", arr[n - 1], arr[n]);
		i++;
	}
}