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
	FILE *sort = fopen("sort.dat", "w");

	int n;
	for (int i = 1; i <= 20; i++){
		n = i * 500; 

		int *arr = malloc(n * sizeof(int));
		
		for(int i = 0; i < n; i++)
		{
			arr[i] = rand() % 1000000;
		}

		double htime = wtime();
		heapSort(arr, n);
		htime = wtime() - htime;
		double itime = witime();
		InsertionSort(arr,n);
		itime = witime() - itime;

		fprintf(sort, " %d %f %f\n", n, htime, itime);
	}

	fclose(sort);

	return 0;
}
