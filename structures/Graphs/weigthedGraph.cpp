#include <iostream>

using namespace std;

// Estructura para almacenar un nodo en la lista de adyacencia
struct Nodo {
    int destino; // Destino del nodo
    int peso;    // Peso de la arista
    Nodo* next;  // Puntero al siguiente nodo

    Nodo(int _destino, int _peso) : destino(_destino), peso(_peso), next(nullptr) {}
};

// Clase para representar el grafo
class Graph {
public:
    int vertices; // Número de vértices
    Nodo** adjList; // Lista de adyacencia

    Graph(int vertice) {
        vertices = vertice;
        adjList = new Nodo*[vertice];
        for (int i = 0; i < vertice; i++) {
            adjList[i] = nullptr;
        }
    }

    // Método para agregar una arista ponderada
    void addEdge(int origin, int destination, int weight) {
        // Crear un nuevo nodo para la arista
        Nodo* newNode = new Nodo(destination, weight);
        newNode->next = adjList[origin];
        adjList[origin] = newNode;
        
        // Si el grafo es no dirigido, agregar la arista en la dirección opuesta también
        newNode = new Nodo(origin, weight);
        newNode->next = adjList[destination];
        adjList[destination] = newNode;
    }

    // Método para imprimir el grafo
    void printGraph() {
        for (int i = 0; i < vertices; i++) {
            cout << "Lista de adyacencia del vertice " << i << ":";
            Nodo* temp = adjList[i];
            while (temp) {
                cout << " -> (" << temp->destino << ", " << temp->peso << ")";
                temp = temp->next;
            }
            cout << "\n";
        }
    }

    ~Graph() {
        for (int i = 0; i < vertices; i++) {
            Nodo* temp = adjList[i];
            while (temp) {
                Nodo* next = temp->next;
                delete temp;
                temp = next;
            }
        }
        delete[] adjList;
    }
};

int main() {
    Graph g(6); 
    g.addEdge(0, 1, 4);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 2);
    g.addEdge(2, 3, 4);
    g.addEdge(3, 4, 5);
    g.addEdge(4, 5, 1);

    g.printGraph(); 
    return 0;
}
