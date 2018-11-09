#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void * a, const void * b) 
{ 
	return ( *(int*)a - *(int*)b ); 
}

void linearSearch(int arr[], int length, int elem)
{
	_Bool found = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == elem) {
			printf("%i found\n", elem);
			found = 1;
			break;
		}
	}
	if (!found)
		printf("%i not found\n", elem);
}

int main()
{
	srand(time(NULL));
	int length = 100000;
	int arr[length];
	int elem = (rand() % length) - (length / 2);

	for (int i = 0; i < length; i++)
	{
		arr[i] = (rand() % length) - (length / 2);
	}

	clock_t begin = clock();
	linearSearch(arr, length, elem);
	clock_t end = clock();
	double time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Unsorted array: %f sec\n", time);

	qsort(arr, length, sizeof(int), compare);

	begin = clock();
	linearSearch(arr, length, elem);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Sorted array: %f sec\n", time);

	return 0;
}
