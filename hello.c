#include <stdio.h>
#include <omp.h>

int main () {
    #pragma omp parallel
    {
        printf("Bonjour depuis le thread numéro %d\n", omp_get_thread_num());
    }
    return 0;
}
