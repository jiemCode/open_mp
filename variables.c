#include <stdio.h>
#include <omp.h>

int main () {
    int shared_var = 0;
    int private_var = 0;
    
    #pragma omp parallel shared(shared_var) private(private_var)
    {
        private_var = omp_get_thread_num();
        
        shared_var += 1;
        
        printf("Thread %d : private_var = %d, shared_var = %d\n", omp_get_thread_num(), private_var, shared_var);
    }
    return 0;
}
