#include <iostream>

using namespace std;

struct Nodo {
    int data;
    Nodo* next;
    Nodo* previus;

    Nodo( int _data ): data( _data ){}; 
};

class Deque{
    private:
       Nodo* front;
       Nodo* rear;

    public:
        Deque(): front( nullptr ), rear( nullptr ){};

    void enqueueFront( int newValue ){
        Nodo* newNode = new Nodo( newValue );
        newNode->next = front;
        newNode->previus = nullptr;

        ( front == nullptr ) 
         ? front = rear = newNode
         : front->previus = newNode, front = newNode;
    } 

    void enqueueRear( int newValue ){
        Nodo* newNode = new Nodo( newValue );
        newNode->next = nullptr;
        newNode->previus = rear;

        if( front == nullptr ){
            front = rear = newNode;
        } 
        else {
            rear->next = newNode;
            rear = newNode;
        }

    }

    void dequeueFront(){
        Nodo* nodeToDelete = front;
        front = front->next;

        if ( front == nullptr ) rear == nullptr;
        else front->previus = nullptr;

        delete nodeToDelete;

    }

    void dequeueRear( ){
       Nodo* nodeToDelete = rear;
       rear = rear->previus;

       if( rear == nullptr ){
          front = nullptr;
       }
       else {
          rear->next = nullptr;
       }

       delete nodeToDelete;
    }    

    void getRear(){
        cout << "Ultimo elemento: " << rear->data << "\n";
    }

    void getFront(){
        cout << "Primer elemento: " << front->data << "\n";
    }

};

int main(){

    Deque queue;
    queue.enqueueFront(1);
    queue.enqueueFront(2);
    queue.enqueueFront(3);
    queue.enqueueRear(5);
    queue.enqueueFront(10);
    queue.enqueueFront(3);

    queue.getFront();
    queue.getRear();


}