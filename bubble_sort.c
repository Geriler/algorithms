#include <stdio.h>

void bubbleSort(int arr[], int *length)
{
	for (int i = 0; i < *length; i++)
	{
		for (int j = 0; j < *length - i; j++)
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
	int arr[] = { 0, 4, 6, -2, 6, -4, 1, 2, -8, 9 };
	int length = sizeof(arr) / sizeof(int);

	bubbleSort(arr, &length);
	
	printf("Отсортированный массив:\n");
	for (int i = 0; i < length; i++)
	{
		printf("%i\n", arr[i]);
	}
	return 0;
}