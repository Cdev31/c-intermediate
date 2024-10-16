#include <iostream>

using namespace std;

int main(){
    int numeros[] = {4,6,3,8,1,2};
    int i,j, aux;

    for(i=0; i< 6; i++){
        for(j=0; j<6;j++){
            if( numeros[j] > numeros[j+1] ){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    cout << "Asc\n";
    for( i=0; i < 6; i++ ){
        cout << numeros[i] << " ";
    }

    cout << "Desc\n";
    for( i=5; i >= 0; i-- ){
        cout << numeros[i] << " ";
    }

}