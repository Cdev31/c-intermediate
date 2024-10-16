#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;

int main(){
    //tiempo de entrada
    auto start = chrono::high_resolution_clock::now();


    // code

    //tiempo de salida
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double>  time = end - start;

    cout << fixed << setprecision(6);
    cout << "Time:" << time.count() << "\n";

}