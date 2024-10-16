#include <iostream>
#include <sys/resource.h>

using namespace std;

void printMemoryUsed(){
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    cout << "Uso de memoria" << usage.ru_maxrss << "KB\n";
}

int main()
{

    printMemoryUsed();

    // code
    
    printMemoryUsed();
    
    return 0;
}
