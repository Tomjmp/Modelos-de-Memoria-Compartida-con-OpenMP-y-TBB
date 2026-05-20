#include <iostream>
#include <tbb/parallel_for.h>
#include <tbb/blocked_range.h>

using namespace std;
using namespace tbb;

int main() {
    cout << "Ejemplo de paralelizacion de una tarea con TBB" << endl;

    parallel_for(blocked_range<int>(0, 10), [](const blocked_range<int>& rango) {
        for (int i = rango.begin(); i < rango.end(); i++) {
            cout << "Iteracion " << i << " ejecutada como tarea paralela" << endl;
        }
    });

    return 0;
}
