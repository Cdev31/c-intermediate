#include <iostream>

using namespace std;

struct Nodo {
    int data;
    Nodo* next;

    Nodo( int _data ): data( _data ){}
};

class CircularQueue{
    
    private:
      Nodo* front;
      Nodo* rear;

    public:
      CircularQueue(): front( nullptr ), rear( nullptr ){};

    void enqueue( int data ){
        Nodo* newNode = new Nodo( data );

        if( front == nullptr ){
            front = rear = newNode;
            rear->next = front;
        }
        else{
            rear->next = newNode;
            rear = newNode;
            rear->next = front;
        }

    }

    void dequeue(){
        if( front == nullptr ) return;

        if( front == rear ){
            delete front;
            front = nullptr;
            rear = nullptr;
        }
        else{
            Nodo* temp = front;
            front = front->next;
            rear->next = front;
            delete temp;
        }

    };  

    void peek(){
        cout << "Elemento al principio: " << front->data << endl;
    }

    void display() const {
        if( front == nullptr ) return;
        Nodo* current = front;

        do{
            cout << "elemento: " << current->data << endl;
            current = current->next;
        } while( current != front );
    }    

};

int main(){
    CircularQueue queue;
    queue.enqueue(1);
    queue.enqueue(3);
    queue.enqueue(2);
    queue.enqueue(8);
    queue.enqueue(6);

    queue.display();

    queue.peek();

    queue.dequeue();

    queue.display();
}