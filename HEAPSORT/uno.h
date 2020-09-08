#include <iostream>
#include<fstream>

using namespace std;

void imprimir(int A[],int n);

void imprimir(int A[],int n){
    ofstream archivoH;
    archivoH.open("heapsort.txt",ios::app);
    archivoH << "\nARREGLO ORDENADO POR  HEAPSORT: " ;
 for (int i=1;i<=n;i++)
    {
        cout << "|"<<A[i] << "|";
        archivoH << "|"<<A[i] << "|";
    }
    archivoH.close();
  }
