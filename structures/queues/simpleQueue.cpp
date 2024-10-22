#include <iostream>

using namespace std;

struct Nodo {
    int data;
    Nodo* next;

    Nodo( int _data ): data( _data ){}
};

class simpleQueue{

    private:
       Nodo* front;
       Nodo* rear;

    public:
      simpleQueue(): front( nullptr ), rear( nullptr ){};

    void enqueue( int newData ){
        Nodo* newNode = new Nodo( newData );
        newNode->next = nullptr;

        if( front == nullptr ){
            front = newNode;
            rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue(){
       if( front == nullptr ){
         return;
       }
       Nodo* node = front;
       front = front->next;

       delete node;

       if( front == nullptr ){
        rear = nullptr;
       }
    }

    void peek(){
        if( front == nullptr ){
            cout << "No hay elementos en cola";
            return; 
        }
        cout << "Primer elemento en cola: " << front->data << "\n";
    }


};

int main(int argc, char const *argv[])
{
    simpleQueue queue;

    queue.enqueue(4);
    queue.enqueue(2);
    queue.enqueue(6);
    queue.enqueue(2);

    queue.peek();

    return 0;
}
