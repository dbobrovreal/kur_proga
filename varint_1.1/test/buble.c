#include <time.h>
#include <sys/time.h>

double wtime()
{
    struct timeval t;
    gettimeofday(&t, NULL);
    return (double)t.tv_sec + (double)t.tv_usec * 1E-6;
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
   
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++){       
     
       for (j = 0; j < n-i-1; j++){  
           if (arr[j] > arr[j+1]){ 
              swap(&arr[j], &arr[j+1]); 
            }
        }   
    }

} 
