#include <iostream>

using namespace std;

// Función para mezclar dos subarreglos
void mezclar(int arreglo[], int inicio, int medio, int fin) {
    int tamañoIzquierdo = medio - inicio + 1;
    int tamañoDerecho = fin - medio;

    // Crear arreglos temporales
    int arregloIzquierdo[tamañoIzquierdo];
    int arregloDerecho[tamañoDerecho];

    // Copiar datos a los arreglos temporales
    for (int i = 0; i < tamañoIzquierdo; i++)
        arregloIzquierdo[i] = arreglo[inicio + i];
    for (int j = 0; j < tamañoDerecho; j++)
        arregloDerecho[j] = arreglo[medio + 1 + j];

    // Mezclar los arreglos temporales
    int indiceIzquierdo = 0, indiceDerecho = 0, indiceTemporal = inicio;

    while (indiceIzquierdo < tamañoIzquierdo && indiceDerecho < tamañoDerecho) {
        if (arregloIzquierdo[indiceIzquierdo] <= arregloDerecho[indiceDerecho]) {
            arreglo[indiceTemporal] = arregloIzquierdo[indiceIzquierdo];
            indiceIzquierdo++;
        } else {
            arreglo[indiceTemporal] = arregloDerecho[indiceDerecho];
            indiceDerecho++;
        }
        indiceTemporal++;
    }

    // Copiar los elementos restantes del arreglo izquierdo
    while (indiceIzquierdo < tamañoIzquierdo) {
        arreglo[indiceTemporal] = arregloIzquierdo[indiceIzquierdo];
        indiceIzquierdo++;
        indiceTemporal++;
    }

    // Copiar los elementos restantes del arreglo derecho
    while (indiceDerecho < tamañoDerecho) {
        arreglo[indiceTemporal] = arregloDerecho[indiceDerecho];
        indiceDerecho++;
        indiceTemporal++;
    }
}

// Función recursiva para dividir y ordenar el arreglo
void mergeSort(int arreglo[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;

        // Llamadas recursivas para ordenar las dos mitades
        mergeSort(arreglo, inicio, medio);
        mergeSort(arreglo, medio + 1, fin);

        // Mezclar las dos mitades ordenadas
        mezclar(arreglo, inicio, medio, fin);
    }
}

int main() {
    int arreglo[] = {38, 27, 43, 3, 9, 82, 10}; // Arreglo original
    int tamaño = sizeof(arreglo) / sizeof(arreglo[0]); // Tamaño del arreglo

    // Ordenar el arreglo
    mergeSort(arreglo, 0, tamaño - 1);

    // Imprimir el arreglo ordenado
    for (int i = 0; i < tamaño; i++) {
        cout << arreglo[i] << " ";
    }

    return 0;
}
