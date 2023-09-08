// C++ program to find number of bins required using
// next fit algorithm.
#include <stdio.h>

int nextFit(int weight[], int n, int c)
{
	int res = 0, bin_rem = c;


	for (int i = 0; i < n; i++) {
		// If this item can't fit in current bin
		if (weight[i] > bin_rem) {
			res++;
			bin_rem = c - weight[i];
		}
		else
			bin_rem -= weight[i];
	}
	return res;
}

int main()
{
	int weight[] = { 2, 5, 4, 7, 1, 3, 8 };
	int c = 10;
	int n = sizeof(weight) / sizeof(weight[0]);
	printf ("Number of bins required in Next Fit : %d",nextFit(weight, n, c));
	return 0;
}
