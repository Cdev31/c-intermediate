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
    
    string word;
    string ending;
    
    bool finished = false;
    
    char voclaes[5] = {'a', 'e', 'i', 'o', 'u'};

    vector<string> palabras;
    
    int i, j, aux;

    while( !finished ){

        string word;
        string ending;

        cout << "Ingrese su palabra: \n";
        cin >> word;

        palabras.push_back( word );
        
        cout << "Desea finalizar? (s para sí, n para no): \n";
        cin >> ending;

        if (ending == "s") {
            finished = true;
        }
    }

   for( i=0; palabras.size() > i; i++ ){
       for( j=0; palabras.size() > j; j++ ){
          if( palabras[i]. )
       }
   }
    
}