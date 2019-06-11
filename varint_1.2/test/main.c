#include <stdlib.h>
#include <stdio.h>

extern double wtime();

extern int max (int *a, int n, int i, int j, int k);

extern void swap (int *a, int n, int i);

extern void heapSort (int *a, int n);

extern double witime();

extern void InsertionSort(int *a, int n);

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

	heapSort(arr, n);

	printf("Отсортированый список чисел (Heap sort):\n");

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

	InsertionSort(arr, n);

	printf("Отсортированый список чисел (Insertion sort): \n");

	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
