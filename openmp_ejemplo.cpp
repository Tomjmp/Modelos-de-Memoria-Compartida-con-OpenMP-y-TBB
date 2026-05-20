#include <iostream>
#include <omp.h>

using namespace std;

int main() {
    cout << "Ejemplo de paralelizacion de un bucle con OpenMP" << endl;

    #pragma omp parallel for
    for (int i = 0; i < 10; i++) {
        int hilo = omp_get_thread_num();

        #pragma omp critical
        {
            cout << "Iteracion " << i << " ejecutada por el hilo " << hilo << endl;
        }
    }

    return 0;
}
