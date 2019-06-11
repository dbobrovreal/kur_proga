#include <stdlib.h>
#include <stdio.h>

extern double wtime();

extern void merge(int arr[], int low, int mid, int high); 

extern void mergeSort(int arr[], int low, int high);

extern double witime();

extern void ShellSort(int arr[], int n);

int main()
{
	int n;

	printf("Введите количество элиментов:", n);
	scanf("%d", &n);

	int*arr = malloc(n * sizeof(int));

	printf("Сгенирированный список чисел: \n");

	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 150;
		printf("%d\n", arr[i]);
	}

	mergeSort(arr, 0, n - 1);

	printf("Отсортированый список чисел (Merge sort):\n");

	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}

	printf("Сгенирированный список чисел: \n");

	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 150;
		printf("%d\n", arr[i]);
	}

	ShellSort(arr, n);

	printf("Отсортированый список чисел (Shell sort): \n");

	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
