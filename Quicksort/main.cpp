#include <iostream>
#include<fstream>

using namespace std;
#include<ctime>
int mitad(int arr[], int pinicial, int pfinal);  // parte de la mitad del arreglo para determinar el pivote

void ordenar (int arr[], int pinicial, int pfinal); // ordena el arreglo

int main()
{
    ofstream ordenamiento;
    ordenamiento.open("quicksort.txt", ios::app);
   // int A[10]={88,-6,69,-33,98,7,23,-5,0,100};
   int A[10];  //arreglo vacio
    srand(time(0)); //llamamos a la funcion sran y tomare tiempo del ordenador, genera numeros aleatorios
    for(int i=0;i<10;i++){
        A[i]= 1+rand()%(45-1); // llena el arreglo con numeros entre 1-20
    }
    cout << endl;
    ordenamiento << "\nARREGLO DESORDENADO: ";
   for(int i=0;i<10;i++){
        cout <<"|" <<A[i] <<"|";
        ordenamiento <<"|" <<A[i] <<"|";
   }

   ordenar(A,0,9);
   cout << endl;
   ordenamiento << "\nALGORITMO DE ORDENAMIENTO QUICKSORT: ";
   for(int i=0;i<10;i++){
        cout <<"|" <<A[i] <<"|";
        ordenamiento<<"|" <<A[i] <<"|";
   }

   ordenamiento.close ();

    return 0;
}

int mitad(int arr[], int pinicial, int pfinal){  // no encuentra la posicion si no el valor central

return arr[(pinicial+pfinal)/2];
}

void ordenar (int arr[], int pinicial, int pfinal){
    int i=pinicial;
    int j=pfinal;
    int temp;     // variable temporal para realizar el intercambio
    int piv=mitad(arr,pinicial,pfinal);//determinar el valor  pivote

    //empieza a realizar las comparaciones y los punterosa recorrer

    do{
        while(arr[i]<piv){
            i++;
        }
        while(arr[j]>piv){
            j--;
        }

        if(i<=j){  // puntero v recorre el puntero, puntero f intercambio de los valores y recorre una posicion
            temp= arr[i];
            arr[i]= arr[j];
            arr[j]=temp;        //algoritmo de la burbuja se asemeja

            i++;  //puntero derecho recorre
            j--;   // recorre puntero izquierdo
        }
    }while(i<=j);
    if(pinicial<j){
        ordenar(arr,pinicial,j);
    }
    if(i<pfinal){
        ordenar(arr,i,pfinal);
    }
}


