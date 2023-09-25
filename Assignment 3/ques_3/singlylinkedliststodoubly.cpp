#include <iostream>

using namespace std;

// Define a singly linked list node structure
struct Node {
    int data;
    Node* next;
};

// Function to add a new node at the end of the list
void insertNode(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to split the original list into two sublists with alternating elements
void alternateSplit(Node* original, Node*& sublist1, Node*& sublist2) {
    Node* current = original;
    bool toSublist1 = true;

    while (current != nullptr) {
        if (toSublist1) {
            insertNode(sublist1, current->data);
        } else {
            insertNode(sublist2, current->data);
        }

        toSublist1 = !toSublist1;
        current = current->next;
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* originalList = nullptr;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertNode(originalList, data);
    }

    Node* sublist1 = nullptr;
    Node* sublist2 = nullptr;

    alternateSplit(originalList, sublist1, sublist2);

    printList(sublist1);
    printList(sublist2);

    return 0;
}