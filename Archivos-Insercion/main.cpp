#include <iostream>
#include <fstream>

using namespace std;

void ingresar(int a[], int tam);
void ordenarInsercion(int a[],int tam);
void mostrar(int a[], int tam);

int main(){
int b[100];
int num=0;

  cout << "Cuantos numeros desea ingresar? ";
  cin >> num;

  ingresar(b,num);
  ordenarInsercion(b,num);
  mostrar(b, num);

}

void ingresar(int a[], int tam){
    ofstream archivo;
    archivo.open("ordenamiento.txt",ios::app);

  cout << "Ingrese los elementos del  arreglo: " << endl;
  for (int i=0;i<tam;i++){
    cout << "numero"<< "[" << i << "] = ";
    cin >> a[i];
  }
  cout << endl;
   cout << "Numero de elementos: " << tam << endl;
   archivo << "\nORDENAMIENTO POR INSERCION " << "\n ";
   archivo << "Numero de elementos: " << tam << "\n ";
   cout << "Arreglo desordenado: " ;
   archivo  <<  "Arreglo desordenado: " ;
  for ( int i=0;i<tam;i++){
    cout << a[i] << " ";
    archivo << a[i] << " ";
  }

  archivo.close();
}
void ordenarInsercion(int a[],int tam){
int aux;
    for(int i=0;i<tam;i++){
        aux=a[i];
        int p=i;

        while(p>0){

            if(a[p-1]>aux){
                    a[p]=a[p-1];
                    a[p-1]= aux;
               }
               p--;
        }
    }
}

void mostrar(int a[], int tam){
    ofstream archivo;
    archivo.open("ordenamiento.txt",ios::app);
    int suma=0;
  cout << "\nArreglo ordenado: ";
  archivo << "\nArreglo ordenado: ";
  for(int i=0;i<tam; i++){
        cout << a[i] << " ";
        archivo << a[i] << " ";
        suma= suma+a[i];
    }
  cout << "\n";
  cout << "Suma total: " << suma;
  archivo << "\nSuma total: " << suma << "\n";

archivo.close();
}
