#include <regex>
#include <iostream>
#include <string>

using namespace std;

int main(){
    regex pattern("^abc$");
    smatch isEqual;
    string text = "abc";

    if( regex_search( text, isEqual, pattern ) ){
        cout << "Se encontro: " << isEqual[0] << endl;
    }
    else {
        cout << "No hubo coincidencias\n";
    }
}