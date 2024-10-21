#include <iostream>

using namespace std;

struct File {
    string filename;
    File* next;

    File( string _filename ): filename( filename ){}; 
};

class DownloadQueue{
    private:
       File* front;
       File* rear;

    public:
       DownloadQueue(): front( nullptr ), rear( nullptr ){};

    void enqueue( string filename ){
        File* newFile = new File(filename);
        if( rear == nullptr ){
            front = rear = newFile;
        }

        rear->next =  newFile;
        rear = newFile;
        cout << filename << "agregado a la cola";
    }      

};

int main(){

}