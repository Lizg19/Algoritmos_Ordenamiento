#include <iostream>
#include <fstream>

using namespace std;
void ingresar(int A[], int n);

void ingresar(int A[], int n){
    ofstream archivoH;
    archivoH.open("heapsort.txt",ios::app);
for (int i=1;i<=n;i++)
    {
        cin>> A[i];
    }
    archivoH << "\nARREGLO DESORDENADO: ";
    for (int i=1;i<=n;i++)
    {
        archivoH << "|"<<A[i] << "|";
    }
      archivoH.close();
}
