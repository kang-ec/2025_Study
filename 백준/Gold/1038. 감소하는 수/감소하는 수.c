#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int i, j, arr[10], restart, size;
	long long temp, num = 10;

	scanf("%d", &n);

	if (n < 10)
	{
		printf("%d", n);
		return 0;
	}

	if (n > 1022)
	{
		printf("-1");
		return 0;
	}

	for (i = 10; i <= n; i++)
	{
		restart = 1;
		while (restart != 0)
		{
			restart = 0;
			size = log10(num);
			temp = num;
			for (j = 0; j < size; j++)
			{
				arr[j] = temp % 10;
				temp /= 10;
				if (arr[j] >= temp % 10)
				{
					num = (temp + 1) * pow(10, j+1);
					restart++;
				}		
			}
		}

		num++;
	}

	printf("%lld", num - 1);
}