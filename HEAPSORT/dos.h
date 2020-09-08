#include <iostream>
using namespace std;

 namespace  heap{
void  heapSort(int b[], int n){
    int valor, temp, a;
    //recorrer los elementos del arreglo
    for (int i=n;i>0;i--){
        for (int j=1;j<=i;j++){
            // parte de verificacion, nodo padre valor mayor e hijos menor
            valor = b[j];
            a=j/2; // elemento padre

            //comparaciones entre los nuevos padre
            while(a>0 && b [a]<valor)
            {
                // realizar los intercambio
                b[j]= b[a];
                j=a;
                a=a/2;
            }
            b[j]= valor;
        }
         // el monticulo pasa al final
            temp= b[1];
            b[1]= b[i];
            b[i]= temp;
    }

}
}
