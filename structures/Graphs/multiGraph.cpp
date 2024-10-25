#include <iostream>

using namespace std;

// Estructura para almacenar un nodo en la lista de adyacencia
struct Nodo {
    int destino; // Destino del nodo
    int peso;    // Peso de la arista
    Nodo* next;  // Puntero al siguiente nodo

    Nodo(int _destino, int _peso) : destino(_destino), peso(_peso), next(nullptr) {}
};

// Clase para representar el multigrafo
class MultiGraph {
public:
    int vertices; // Número de vértices
    Nodo** adjList; // Lista de adyacencia

    MultiGraph(int vertice) {
        vertices = vertice;
        adjList = new Nodo*[vertice];
        for (int i = 0; i < vertice; i++) {
            adjList[i] = nullptr;
        }
    }

    // Método para agregar una arista ponderada (permite múltiples aristas y bucles)
    void addEdge(int origin, int destination, int weight) {
        // Crear un nuevo nodo para la arista
        Nodo* newNode = new Nodo(destination, weight);
        newNode->next = adjList[origin];
        adjList[origin] = newNode;

        // También agregar la arista en la dirección opuesta (si el grafo es no dirigido)
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

    ~MultiGraph() {
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
    MultiGraph g(6); 
    g.addEdge(0, 1, 4);
    g.addEdge(0, 1, 2); // Multiarista entre 0 y 1
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 2);
    g.addEdge(2, 3, 4);
    g.addEdge(3, 4, 5);
    g.addEdge(4, 5, 1);
    g.addEdge(4, 5, 3); // Multiarista entre 4 y 5
    g.addEdge(1, 1, 7); // Bucle en el vértice 1
    g.addEdge(3, 3, 8); // Bucle en el vértice 3

    g.printGraph(); 
    return 0;
}
