#include <stdio.h>

void fibonacci(unsigned long long arr[], int num)
{
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < num; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}

int main()
{
	int num = 93;
	unsigned long long arr[num];
	fibonacci(arr, num);
	for (int i = 0; i < num; i++)
	{
		printf("%i:\t%lli\n", i + 1, arr[i]);
	}
	printf("\n");
	return 0;
}