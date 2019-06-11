#include <stdlib.h>
#include <stdio.h>

extern double wtime();

extern void swap(int *xp, int *yp);

extern void bubbleSort(int arr[], int n); 

extern double witime();

extern void QuickSort(int *arr, int first, int last);

int main()
{
	FILE *sort = fopen("sort_w.dat", "w");

	int n;
	for (int i = 1; i <= 20; i++){
		n = i * 500; 

		int *arr = malloc(n * sizeof(int));

		arr[i] = 0;
		for(int i = 0; i < n; i++)
		{
			//arr[i] = rand() % 1500000;
			arr[i] = arr[i] + 1; 
		}

		double btime = wtime();
		bubbleSort(arr, n);
		btime = wtime() - btime;
		double qtime = witime();
		QuickSort(arr,0, n -1);
		qtime = witime() - qtime;

		fprintf(sort, " %d %f %f\n", n, btime, qtime);
	}

	fclose(sort);

	return 0;
}
