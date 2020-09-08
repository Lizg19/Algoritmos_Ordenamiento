#include <iostream>

#include "uno.h"
#include "dos.h"
#include "tres.h"

using namespace std;
using namespace heap;


int main()
{
    int A[100], n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin>> n;
    ingresar (A,n);
    heapSort(A,n);
    imprimir(A,n);
    return 0;
}

