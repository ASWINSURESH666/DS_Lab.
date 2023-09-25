#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void insertNode(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (head == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void printForward(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void printBackward(Node* tail) {
    Node* current = tail;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Put the no: of values to be traversed : ";
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertNode(head, tail, data);
    }

    cout << "Forward traversal:" << endl;
    printForward(head);

    cout << "Backward traversal:" << endl;
    printBackward(tail);

    return 0;
}
