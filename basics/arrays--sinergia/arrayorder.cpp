#include <iostream>
/*
Algoritmo de ordenamiento burbuja
*/
void clasificar(int arreglo[], int tam);
int main(){
    int arreglo[] = {4,1,2,7,5,9,6,8,3};
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    clasificar(arreglo, tam);
    for (int elem : arreglo){
        std::cout << elem << " ";
    }
}
void clasificar(int arreglo[], int tam){
    //No es necesario devolver el arreglo, ya que al pasar el arreglo, solo pasamos el puntero, osea la direccion de espacio de dicho array. Por lo tanto, al modificar-lo dentro de la funcion estamos modificando el array original.
    int temp;
    for(int i = 0; i < tam - 1; i++){
       
        for(int j = 0; j < tam - i - 1; j++){

            if(arreglo[j] > arreglo[j + 1]) // Para cambiar el orden, de ascendente a descendente solo debemos cambiar la comparación [ '<' o '>' ]
            {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}


