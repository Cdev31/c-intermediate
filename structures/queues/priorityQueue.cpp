#include <iostream>

using namespace std;

struct PriorityNode{
    int data;
    int priority;
    PriorityNode* next;

    PriorityNode( int _data, int _priority ): data( _data ), priority( _priority ){}

};

class PriorityQueue{

    private:
       PriorityNode* front;

    public:
       PriorityQueue(): front( nullptr){};   


    void addNode( int newValue, int priority ){
        
        PriorityNode* newNode = new PriorityNode( newValue, priority );
        newNode->next = nullptr;

        if( front == nullptr || priority > front->priority ){
            newNode->next = front;
            front = newNode;
        }
        else{
            PriorityNode* temporalNode = front;
            while( temporalNode->next != nullptr && temporalNode->next->priority >= priority ){
                temporalNode = temporalNode->next;
            }
            newNode->next = temporalNode->next;
            temporalNode->next = newNode;
        }
    } 

    void deleteMorePriority(){
        
        if( front == nullptr ) return ;

        PriorityNode* nodeToDelete = front;
        front = front->next;

        cout << "Nodo " << nodeToDelete->data << " eliminado\n";
        delete nodeToDelete;

    }

    void getNodeMorePriority(){
        cout << "El nodo: " << front->data << " tiene la mayor prioridad con " << front->priority;
    }

};

int main(){

    PriorityQueue queue;
    queue.addNode( 2, 2 );
    queue.addNode( 3, 4 );
    queue.addNode( 4, 1 );
    queue.addNode( 1, 3 );

    queue.getNodeMorePriority();
}