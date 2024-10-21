#include <iostream>

using namespace std;

void change( float* num1, float* num2 ){
    float aux;

    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int findMax( int *dirVecm , int size ){
    int max = 0;
    cout << "aqui " << ( dirVecm+2 )  << endl; 
    for( int i =0; size > i; i++ ){
        cout << *dirVecm << "aca\n";
        if( *( dirVecm+i ) > max ){
            max = *( dirVecm+ i );
        }
    }

    return max;
}

int main() {
     const int nElements = 5;
     int numbers[nElements] = { 3,5,2,8,1 };
     cout <<  &numbers[0] << "aca\n";
     cout << "El maximo es: " << findMax( &numbers[0], nElements );

     // arimetica de punteros;
    int num = 2;
    int* address = &num;

    int newValue = *( address + 1 );

    newValue = 2;
    int sum = ( newValue + num);

    cout << "sumando: " << sum << "\n";

    return 0;
}