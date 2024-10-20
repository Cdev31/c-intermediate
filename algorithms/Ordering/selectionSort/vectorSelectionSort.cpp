#include <iostream>
using namespace std;

int main() {
    int matrix[3][4] = {
        {12, 5, 8, 10},
        {7, 2, 3, 6},
        {11, 14, 1, 9}
    };
    short j, i, aux;

    
    for( i = 0; 11 > i; i++ ){
        short min = i;
        for( j = i + 1; 12 > j; j++ ){
            if( matrix[ j / 4 ][ j % 4] < matrix[ min / 4 ][ min % 4 ] ){
                min = j;
            }
         }
        aux = matrix[ i / 4][ i % 4];
        matrix[ i / 4 ][ i % 4] = matrix[min / 4][min % 4];
        matrix[min / 4][min % 4] =  aux;
    }

    cout << "Asc\n";
    for( short i = 0; 3 > i; i++){
        for( short j = 0; 4 > j; j++ ){
            cout << matrix[i][j] << " " ;
        }
        cout << "\n";
    }

    
}

