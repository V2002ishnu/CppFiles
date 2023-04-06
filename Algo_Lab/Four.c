#include <limits.h>
#include <stdio.h>

int MatrixChainOrder(int p[], int n)
{
	int arr[n][n];

	int i, j, k, L, q;
	for (i = 1; i < n; i++)
		arr[i][i] = 0;
	for (L = 2; L < n; L++) {
		for (i = 1; i < n - L + 1; i++) {
			j = i + L - 1;
			arr[i][j] = INT_MAX;
			for (k = i; k <= j - 1; k++) {
				q = arr[i][k] + arr[k + 1][j] + p[i - 1] * p[k] * p[j];
				if (q < arr[i][j])
					arr[i][j] = q;  
			}
		}
	}

	return arr[1][n - 1];
}

int main()
{
	int arr[] = {4,3,6,3,1,7 };

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Minimum number of multiplications is .... %d ",
		MatrixChainOrder(arr, size));

	getchar();
	return 0;
} 