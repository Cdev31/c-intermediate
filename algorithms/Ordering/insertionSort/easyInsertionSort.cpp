#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {2,4,2,5,3,4,1,5};
    int i, position, aux;

    for( i=0; 8 > i; i++ ){
        position = i;
        aux = numbers[i];

        while( (position > 0) && ( numbers[ position - 1] > aux )){
            numbers[position] = numbers[position -1];
            position--;
        }
        numbers[position] = aux;
    }

    for( i=0; 8 > i ; i++ ){
        cout << "Elemento: " << numbers[i];
    }

}
