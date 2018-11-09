#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				float tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int length = 100000;
	int arr[length];

	FILE *unsorted = fopen("unsorted.txt", "w");
	for (int i = 0; i < length; i++)
	{
		arr[i] = (rand() % length) - (length / 2);
		fprintf(unsorted, "%i\n", arr[i]);
	}
	fclose(unsorted);

	clock_t begin = clock();
	bubbleSort(arr, length);
	clock_t end = clock();
	double time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Время выполнения программы: %f\n секунд", time);

	FILE *sorted = fopen("sorted.txt", "w");
	for (int i = 0; i < length; i++)
	{
		fprintf(sorted, "%i\n", arr[i]);
	}
	fclose(sorted);
	return 0;
}
