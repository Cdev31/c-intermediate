#include <iostream>

using namespace std;

int main()
{
    int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
   int matrix2[3][4];
   int newArray[12];

  for( short i = 0; 3 > i; i++ ){
    for( short j = 0; 4 > j; j++){
        newArray[i * 4 + j] = matrix[i][j];
    }
  }

  cout << "Nuevo array\n";
  for( short i =0; 12 > i; i++ ){
    cout << newArray[i] << " ";
  }

  cout << "volver a convertir la matrix";

  for( short i = 0; 3 > i; i++ ){
    for( short j = 0; 4 > j; j++ ){
        matrix2[i][j] = newArray[ i * 4 + j ];
    }
  }

  cout << "Nueva matrix\n";
   for( short i = 0; 3 > i; i++ ){
     cout << "[";
    for( short j = 0; 4 > j; j++ ){
        cout << matrix2[i][j] << " " ;
    }
    cout << "]\n";
  }

  return 0;
}
