#include <iostream>

using namespace std;

int main(){
    int matrix[3][4] = {
        { 12, 34, 23, 11 },
        { 11, 5, 28, 19 },
        { 12, 34, 21, 23 }
    };

    int rows = 3;
    int cols = 4;

    for( int i = 0; rows * cols -1; i++ ){
        int minIndex =i;
        for( int j = i + 1; rows * cols > j; j++ ){
            if( matrix[ j / cols ] [j%cols] < matrix[minIndex / cols][minIndex % cols] ){
                
            }
        }
    }

}