#include <stdio.h>
#define min(a,b) a > b ? b : a

int dp[1001][3];

int main() {
	int n;
	int a;
    scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &dp[i][j]);
	for (int i = 1; i < n; i++) {
		dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
	}
	a = min(dp[n - 1][0], (min(dp[n - 1][1], dp[n - 1][2])));
	printf("%d", a);
	return 0;
}