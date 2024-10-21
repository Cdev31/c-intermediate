#include <iostream>

using namespace std;

struct Task{
    string title;
    Task* next;

    Task( string _title ): title( _title ){};  
};

class Tasks{

    private:
       Task* lastTask;

    public: 
       Tasks(): lastTask( nullptr ){};

    void createNewTask( string title ){
        Task* newTask = new Task( title );

        if( lastTask == nullptr ){
            lastTask = newTask;
            newTask->next = newTask;
        }
        else{
            newTask->next = lastTask->next;
            lastTask->next = newTask;
            lastTask = newTask;
        }
    }      

    void showTask(){
       if( lastTask == nullptr ){
        cout << "No hay tareas" << endl;
        return;
       }

       Task* current = lastTask->next;
       cout << "Tareas: " << endl;

       do{
         cout << current->title << endl;
         current = current->next;
       } while( current != lastTask->next );
      
    }
};

int main(){
    Tasks tareas;
    tareas.createNewTask("Comer");
    tareas.createNewTask("Entrenar");
    tareas.createNewTask("Estudiar");
    tareas.createNewTask("Hacer comida");

    tareas.showTask();

}