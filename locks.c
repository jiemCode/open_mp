#include <stdio.h>
#include <omp.h>

int main () {
    int somme = 0;

    omp_lock_t lock;
    omp_init_lock(&lock);
    
    #pragma omp parallel
    {
        for (int i = 0; i < 10; i++) {
            omp_set_lock(&lock);
            somme += 1;
            omp_unset_lock(&lock);
        }
    }

    omp_destroy_lock(&lock);
    
    printf("Somme finale : %d\n", somme);
    return 0;
}
