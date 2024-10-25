#include <iostream>
#include <stdexcept>

using namespace std;

struct Node {
    int data;      // Valor del nodo
    Node* next;    // Puntero al siguiente nodo

    Node(int val) : data(val), next(nullptr) {} // Constructor
};

class Stack {
private:
    Node* top; // Puntero al elemento superior

public:
    Stack() : top(nullptr) {} // Inicializa el puntero superior como nulo

    ~Stack() {
        while (!isEmpty()) {
            pop(); // Libera todos los nodos al destruir el stack
        }
    }

    void push(int x) {
        Node* newNode = new Node(x); // Crear un nuevo nodo
        newNode->next = top; // Apuntar al antiguo elemento superior
        top = newNode; // Actualizar el puntero superior
    }

    int pop() {
        if (isEmpty()) {
            throw underflow_error("Stack underflow"); // Verificar subdesbordamiento
        }
        int value = top->data; // Almacenar el valor a retornar
        Node* temp = top; // Almacenar el nodo a eliminar
        top = top->next; // Actualizar el puntero superior
        delete temp; // Liberar memoria
        return value; // Retornar el valor del nodo eliminado
    }

    int peek() {
        if (isEmpty()) {
            throw underflow_error("Stack is empty"); // Verificar si está vacío
        }
        return top->data; // Retornar el valor del elemento superior sin eliminarlo
    }

    bool isEmpty() {
        return top == nullptr; // Verificar si el stack está vacío
    }
};

int main() {
    Stack s; // Crear un stack vacío

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Elemento en la parte superior: " << s.peek() << endl; // Muestra 30

    cout << "Elementos en la pila: " << endl;
    while (!s.isEmpty()) {
        cout << s.pop() << " "; // Muestra los elementos en orden inverso
    }
    cout << endl;

    return 0;
}
