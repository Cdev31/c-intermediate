#include <iostream>


using namespace std;

struct Nodo{
    int data;
    Nodo* next;

    Nodo( int _data ): data( _data ){}
};

class Graph{
    public:
      int vertices;
      Nodo** adjList; // aca se crea un array de punteros que al final es un array puntero de punteros

    Graph( int vertice ){
        vertices = vertice;
        adjList = new Nodo*[vertice];// aca se le da el tamano 
        for( short i = 0; vertice > i; i++ ){
            adjList[i] = nullptr; // aca a cada indice del puntero se le agrega null, esto seria algo asi:
                                  // adjList = { null, null, null,...}, asi se veria internamente el array
        }
    }  

    void addEdge( int origin, int destination ){
        Nodo* newNode = new Nodo( destination ); // se crea un puntero llamesmoslo x1
        newNode->next = adjList[origin];// aca le decimos que x1 apunte a el indice que contiene el espacio de origen
                                        // osea si tenemos { null, null, null,...} y el origin es 1 y el espacio en memoria es y1
                                        // entonces x1 apuntara a y1 a su espacio en memoria no a su valor.
        adjList[origin] = newNode;     // ahora y1 en vez de contener esa memoria, contendra x1, ahora esto no lo entiendo
                                      // entiendo que lo que buscas es resolver por punteros, pero cada vez que se cree aristas para un nodo
                                      // el espacio en memoria cambia

        // esto se quita cuando queremos que sea dirigido
        newNode = new Nodo(origin);
        newNode->next = adjList[destination];
        adjList[destination] = newNode;
    }

    void printGraph(){
        for( short i = 0; vertices > i; i++) {
            cout << "Lista de adyacencia del vertice " << i << ":";
            Nodo* temp = adjList[i];
            while( temp ){
                cout << " -> " << temp->data;
                temp = temp->next;
            }
            cout << "\n";
        }
    }

};

int main(){
    Graph g(6); 
    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.printGraph(); 
    return 0;
}