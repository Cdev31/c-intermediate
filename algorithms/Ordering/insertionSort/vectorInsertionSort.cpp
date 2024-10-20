#include <iostream>

using namespace std;

int main(){
    int matrix[3][4] = {
        {12, 5, 8, 10},
        {7, 2, 3, 6},
        {11, 14, 1, 9}
    };
    short i, position, j, aux;

    for( i=0; 3 > i; i++ ){
        for( j =0; 4 > j; j++ ){
            position = j;
            aux = matrix[i][j];

            while( position > 0 && matrix[i][position -1 ] > aux ){
                matrix[i][position] = matrix[i][position -1];
                position--;
            }
            matrix[i][position] = aux;
        }
    }

    cout << "Asc\n";
    for( short i = 0; 3 > i; i++ ){
     cout << "[";
    for( short j = 0; 4 > j; j++ ){
        cout << matrix[i][j] << " " ;
    }
    cout << "]\n";
  }

}