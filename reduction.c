#include <stdio.h>
#include <omp.h>

int main () {
    int N = 10;
    int sum = 0;
    
    #pragma omp parallel for
    //  reduction(+:sum)
    for (int i = 0; i < N; i++) {
        sum += i;
        printf("somme : %d --- thread[%d]\n", sum, omp_get_thread_num());
    }

    printf("La somme est : %d\n", sum);
    return 0;
}
