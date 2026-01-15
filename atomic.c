#include <stdio.h>
#include <omp.h>

int main () {
    int somme = 0;
    
    #pragma omp parallel
    {
        for (int i = 0; i < 10; i++) {
            #pragma omp atomic
            somme += 1;
        }
    }

    printf("Somme finale : %d\n", somme);
    return 0;
}
