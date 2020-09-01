#include <iostream>
using namespace std;
#include<ctime>
#include <fstream>

void dividir (int a[], int inicial, int final );
void fusionar(int a[], int pincipal, int pfinal, int medio);  //mezclar y juntar

int main()
{
    ofstream archivoOrd; // declarar una variable archivo
    archivoOrd.open("mergesort.txt",ios::app);
    int numeros[10];  //arreglo vacio
    srand(time(0)); //llamamos a la funcion sran y tomare tiempo del ordenador, genera numeros aleatorios
    for(int i=0;i<6;i++){
        numeros[i]= 1+rand()%(20-1); // llena el arreglo con numeros entre 1-20
    }
      archivoOrd<< "\n ARREGLO DESORDENADO: ";
    for(int i=0;i<6;i++){
        cout << "|"<<numeros[i]<< "|";
        archivoOrd<< "|"<<numeros[i]<< "|";
        }

    dividir(numeros,0,6);
    cout << "\n";
    archivoOrd << "\nORDENAMIENTO MERGESORT: ";
    for(int i=0;i<6;i++){
        cout << "|"<<numeros[i]<< "|";
        archivoOrd << "|"<<numeros[i]<< "|";
    }
    archivoOrd.close();

    return 0;
}

void dividir (int a[], int inicial, int final ){
int mitad;

if(inicial<final){
  mitad=(inicial+final)/2;  // division del arreglo

  dividir(a,inicial,mitad);  //la primeramitad
  dividir(a,mitad+1,final); // las dos partes del arreglo

  fusionar(a,inicial,final,mitad);
}

}

void fusionar(int a[], int pinicial, int pfinal, int medio){
int i,j,k,temp[pfinal-pinicial+1];
i=pinicial;
k=0;
j=medio+1;

while(i<=medio && j<=pfinal){

    if(a[i]< a[j]){
        temp[k]=a[i];
        k++;
        i++;
    }else {
        temp[k]=a[j];
        k++;
        j++;
    }
}

while(i<=medio){  // parte izquierda
    temp[k]=a[i];
    k++;
    i++;  // realizar las comparaciones
}

while(j<=pfinal){ //parte derecha
    temp[k]=a[j];
    k++;
    j++;  // realizar las comparaciones
}

for(i=pinicial;i<=pfinal;i++){  //union de los arreglos
        a[i]= temp[i-pinicial];


}
}
