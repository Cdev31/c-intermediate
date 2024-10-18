// Ordenamiento de cadenas por número de vocales y longitud:
// Dado un conjunto de N cadenas de texto, ordena las cadenas utilizando el algoritmo 
// de burbuja de acuerdo con el número de vocales en cada cadena, en orden 
// descendente. Si dos cadenas tienen la misma cantidad de vocales, ordénalas por su
// longitud en orden ascendente. Si las longitudes también son iguales, mantén el 
// orden lexicográfico (alfabético).
// Entrada: Un número N seguido de N cadenas de texto.
// Salida: Las cadenas ordenadas según las reglas especificadas.

#include <iostream>
#include <vector>

using namespace std;

int main(){

    char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
    string words[6] = { "apple", "lino", "juan", "enrique", "lopez", "enrique" };
    int index1, index2, numVocales = 0;
    string auxiliar;

    for( index1 = 0; 6 > index1; index1++ ){
        for( index2=0; 5 > index2; index2++ ){
            for( short i = 0; words[index2].size() > i; i++ ){
                if( words[index2][i]  ){
                    numVocales++;
                }
            }
        }
    }
    
}