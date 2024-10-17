#include <iostream>

using namespace std;

int main()
{
    int numbers[] = { 2,3,5,2,3,1,4,2};
    int i, j, aux, min;

    for( i = 0; 8 > i; i++ ){
        min = i;
        for( j = i + 1; 8 > j; j++ ){
            if( numbers[j] < numbers[min] ){
                min = j;
            }
        }
        aux = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = aux;
    }

    for( int i = 8; i >=0; i-- ){
        cout << "Elemento " << i << " es: " << numbers[i] << "\n";
    }

    return 0;
}
