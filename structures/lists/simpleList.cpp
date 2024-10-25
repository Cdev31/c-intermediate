#include <iostream>

using namespace std;

struct Person {
    int id;
    string name;
    Person( int _id, string _name ): id( _id ), name( _name ){};
};

struct Nodo {
    Person person;
    Nodo* next;

    Nodo( Person newPerson ): person( newPerson ), next( nullptr){};
};

class List{

    private:
       int id;
       string name;
       Nodo* initPerson;

    public:
       List(): initPerson(nullptr){};

    void addPersonToHome( int id, string name ){
        Person person( id, name );
        Nodo* newNode = new Nodo( person );
        newNode->next = initPerson;
        initPerson = newNode;
    }

    void addPersonToEnd( int id, string name ){
        Person person( id, name );
        Nodo* newNode = new Nodo( person );
        initPerson->next = newNode;
        newNode->next = nullptr;
    }

    void enlistElements(){
        Nodo* now = initPerson;
        while( now != nullptr ){
            cout << now->person.name << " \n";
            now = now->next;
        }
        cout << "end" << "\n";
    }
    
    ~List() {
        delete initPerson;
    }
};

int main(){

    List personList;

    personList.addPersonToHome( 1, "juan" );
    personList.addPersonToEnd( 2, "ernesto");
    personList.addPersonToEnd( 3, "kalet" );
     personList.addPersonToEnd( 4, "Julian" );

    personList.enlistElements();
    

}