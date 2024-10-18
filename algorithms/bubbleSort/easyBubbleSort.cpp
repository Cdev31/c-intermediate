#include <iostream>

using namespace std;

int main(){
    int numeros[] = {4,6,3,8,1,2};
    char letras[] = { 'a', 'c' , 'd', 'j', 'z', 'm', 'y', 'l'};
    int i,j; 
    char aux;

    for(i=0; i< 8; i++){
        for(j=0; j < 7;j++){
            if( letras[j] > letras[j+1] ){
                aux = letras[j];
                letras[j] = letras[j+1];
                letras[j+1] = aux;
            }
        }
    }
    cout << "Asc\n";
    for( short i=0; i < 7; i++ ){
        cout << letras[i] << " ";
    }

    cout << "Desc\n";
    for( short i=7; i >= 0; i-- ){
        cout << letras[i] << " ";
    }

}

