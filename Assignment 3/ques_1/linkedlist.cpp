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

// Function to search for the occurrence of an element and display positions
void search(Node* head, int key) {
    int position = 1;
    bool found = false;

    Node* current = head;

    while (current != nullptr) {
        if (current->data == key) {
            found = true;
            cout << position << " ";
        }
        current = current->next;
        position++;
    }

    if (!found) {
        cout << "NOT FOUND";
    }

    cout << endl << endl;
}

// Function to count the number of times an element is duplicated
void countDuplicates(Node* head, int key) {
    int count = 0;

    Node* current = head;

    while (current != nullptr) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }

    if (count == 0) {
        cout << "NO DUPLICATES";
    } else {
        cout << count << endl;
    }

    cout << endl;
}

// Function to remove duplicates, keeping the first occurrence
void removeDuplicates(Node*& head, int key) {
    Node* current = head;

    while (current != nullptr && current->next != nullptr) {
        if (current->next->data == key) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
}

// Function to insert an element at a specified position
void insertPosition(Node*& head, int key, int pos) {
    if (pos < 1) {
        cout << "LIST TOO SMALL" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = key;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        int position = 1;

        while (current != nullptr && position < pos - 1) {
            current = current->next;
            position++;
        }

        if (current == nullptr) {
            cout << "LIST TOO SMALL" << endl;
            delete newNode;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

// Function to free memory by deleting the linked list
void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertNode(head, data);
    }

    char operation;
    while (cin >> operation) {
        if (operation == 's') {
            int key;
            cin >> key;
            search(head, key);
        } else if (operation == 'c') {
            int key;
            cin >> key;
            countDuplicates(head, key);
        } else if (operation == 'r') {
            int key;
            cin >> key;
            removeDuplicates(head, key);
        } else if (operation == 'i') {
            int key, pos;
            cin >> key >> pos;
            insertPosition(head, key, pos);
        } else if (operation == 'e') {
            break;
        }
    }

    printList(head);
    deleteList(head);

    return 0;
}
