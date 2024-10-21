#include <iostream>

using namespace std;


int main(){
    short numbers[] = { 1, 22, 3, 4};
    short* number1 = numbers;

    for( short i = 0; sizeof(numbers) / sizeof( *number1 ) > i; i++ ){
        cout << "Su elemento en la memoria: [" << (number1 + i) <<  "] es: " 
             << *(numbers + i) << endl;
    }

    // matrix
    int number2D[3][4] ={
        { 2, 34, 1, 2 },
        { 2, 56, 23, 23 },
        { 3, 4, 54, 21 }
    };

    for( short i = 0; 3 > i; i++ ){
        for( short j = 0; 4 > j; j++ ){
            cout << number2D[i][j] << " ";
        }
        cout << "\n";
    }

} 