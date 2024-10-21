#include <iostream>


using namespace std;

template<typename genderT>

bool findOne( genderT arr[], genderT element, short size ){

    bool isBeOnArray = false;
    

    for( short i =0; size > i; i++ ){
        if( arr[i] == element ) {
            isBeOnArray = true;
            break;
        }
    }

    return isBeOnArray;

}

int main(){

    int numbers[] = { 1, 3, 2, 4, 2, 4, 2 };
    char letters[] = { 'a', 'C', 'F', 'g', 'h' };
    string more[] ={ "sds", "las", "les", "lsda", "juan" };



    //findOne;
    short size = sizeof(letters) / sizeof(letters[0]);
    bool isBe = findOne( letters, 'c' , size);
    cout << ( isBe ? "El elemento esta en el array\n" : "El elemento no esta en el array\n" );


    //insert


    // delete



    // update


    // copy

}