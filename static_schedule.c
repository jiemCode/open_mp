#include <stdio.h>
#include <omp.h>

int main () {
    int N = 12;
    int array[N];
    
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < N; i++) {
        array[i] = i * i;
        printf("Thread %d calcule array[%d] = %d\n", omp_get_thread_num(), i, array[i]);
    }
    return 0;
}
