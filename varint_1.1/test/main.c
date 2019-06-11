#include <stdlib.h>
#include <stdio.h>

extern double wtime();

extern void swap(int *xp, int *yp);

extern void bubbleSort(int arr[], int n); 

extern double witime();

extern void QuickSort(int *arr, int first, int last);

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

	bubbleSort(arr, n);

	printf("Отсортированый список чисел (Buble sort):\n");

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

	QuickSort(arr, 0, n - 1);

	printf("Отсортированый список чисел (Quick sort): \n");

	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
