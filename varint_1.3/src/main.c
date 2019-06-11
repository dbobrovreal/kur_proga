#include <stdlib.h>
#include <stdio.h>

extern double wtime();

extern void merge(int arr[], int low, int mid, int high); 

extern void mergeSort(int arr[], int low, int high);

extern double witime();

extern void ShellSort(int arr[], int n);

int main()
{
	FILE *sort = fopen("sort_u.dat", "w");

	int n;
	for (int i = 1; i <= 20; i++){
		n = i * 500; 

		int *arr = malloc(n * sizeof(int));

		arr[i] = 150000;
		for(int i = 0; i < n; i++)
		{
			//arr[i] = rand() % 1500000;
			arr[i] = arr[i] - 1;
		}

		double mtime = wtime();
		mergeSort(arr, 0,  n);
		mtime = wtime() - mtime;
		double stime = witime();
		ShellSort(arr,n);
		stime = witime() - stime;

		fprintf(sort, " %d %f %f\n", n, mtime, stime);
	}

	fclose(sort);

	return 0;
}
