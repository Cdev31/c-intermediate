#include <iostream>

using namespace std;

int main(){
    int matrix[3][3] = {
        { 64, 56, 23 },
        { 67, 23, 12 },
        { 89, 23, 12 }
    };
    int auxiliar;

    for( short fila = 0; 3 > fila; fila++ ){ 
        for( short index1 = 0; 2 > index1 ; index1++ ){
            for( short index2 = 0; 2 > index2; index2++ ){
                if( matrix[fila][index2] > matrix[fila][index2 + 1]  ){
                    auxiliar = matrix[fila][index2];
                    matrix[fila][index2] = matrix[fila][index2 +1];
                    matrix[fila][index2 +1] = auxiliar;
                }
            }
        }
    }

    cout << "Ascendente\n";
    for( int i =0; 3 > i; i++ ){
        for( int j = 0; 3 > j; j++ ){
            cout << "Es: " << matrix[i][j] << endl;
        }
    }

    cout << "Descendente\n";
    for( int i =0; 3 > i; i++ ){
        for( int j = 0; 3 > j; j++ ){
            cout << "Es: " << matrix[i][j] << endl;
        }
    }

}