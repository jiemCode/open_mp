#include <stdio.h>
#include <omp.h>

int main () {
    int N = 10;
    int sum = 0;
    int x = 1;
    
    #pragma omp parallel num_threads(4)
    {
        #pragma omp for reduction(+:sum)
        for (int i = 0; i < N; i++) {
            sum += i;
        }

        #pragma omp for reduction(*:x)
        for (int i = 1; i < N; i++) {
            x *= i;
        }
    }

    printf("La somme est : %d\n", sum);
    printf("Le produit est : %d\n", x);
    return 0;
}
