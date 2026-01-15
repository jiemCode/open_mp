#include <stdio.h>
#include <omp.h>

int main () {
    #pragma omp parallel num_threads(4)
    {
        int id = omp_get_thread_num();
        printf("Thread %d avant la barrière.\n", id);

        #pragma omp barrier
        printf("Thread %d après la barrière.\n", id);
    }

    return 0;
}
