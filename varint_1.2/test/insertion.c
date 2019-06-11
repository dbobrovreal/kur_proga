#include <time.h>
#include <sys/time.h>

double witime()
{
    struct timeval t;
    gettimeofday(&t, NULL);
    return (double)t.tv_sec + (double)t.tv_usec * 1E-6;
}

void InsertionSort(int *a, int n){
    for(size_t i = 1; i < n; ++i) {
        int tmp = a[i];
        size_t j = i;
        while(j > 0 && tmp < a[j - 1]) {
            a[j] = a[j - 1];
            --j;
        }
        a[j] = tmp;
    }
}