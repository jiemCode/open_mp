#include <stdio.h>
#include <omp.h>

int main () {
    #pragma omp parallel for ordered
    for (int i = 0; i < 10; i++) {
        #pragma omp ordered
        {
            printf("Itération %d\n", i);
        
        }
    }

    return 0;
}
