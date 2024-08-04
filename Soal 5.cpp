#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int data) {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->next = nullptr;
        new_node->prev = nullptr;

        if (!head) {
            head = new_node;
            head->next = head;
            head->prev = head;
        } else {
            new_node->next = head;
            new_node->prev = head->prev;
            head->prev->next = new_node;
            head->prev = new_node;
        }
    }

    void display() {
        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }

    Node* search(int data) {
        Node* current = head;
        do {
            if (current->data == data) {
                return current;
            }
            current = current->next;
        } while (current != head);
        return nullptr;
    }

    void deleteNode(Node* node) {
        if (!node) {
            cout << "Invalid node" << endl;
            return;
        }
        if (node->prev) {
            node->prev->next = node->next;
        } else {
            head = node->next;
        }
        if (node->next) {
            node->next->prev = node->prev;
        }
        delete node;
    }

    int length() {
        Node* current = head;
        int count = 0;
        do {
            count++;
            current = current->next;
        } while (current != head);
        return count;
    }

    Node* access(int index) {
        if (index < 0 || index >= length()) {
            cout << "Invalid index" << endl;
            return nullptr;
        }
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current;
    }

    void concatenate(LinkedList* list) {
        if (!list) {
            cout << "Invalid list" << endl;
            return;
        }
        Node* tail = head->prev;
        tail->next = list->head;
        list->head->prev = tail;
        head->prev = list->head;
        list->head->next = head;
    }
};

int main() {
    LinkedList list1;
    list1.insert(1);
    list1.insert(2);
    list1.insert(3);

    LinkedList list2;
    list2.insert(4);
    list2.insert(5);
    list2.insert(6);

    cout << "List 1: ";
    list1.display();

    cout << "List 2: ";
    list2.display();

    Node* node = list1.search(2);
    if (node) {
        cout << "Found node with data: " << node->data << endl;
    } else {
        cout << "Node not found" << endl;
    }

    list1.deleteNode(node);
    cout << "List 1 after deleting node with data 2: ";
    list1.display();

    cout << "Length of list 1: " << list1.length() << endl;

    Node* accessed_node = list1.access(1);
    if (accessed_node) {
        cout << "Accessed node with data: " << accessed_node->data << endl;
    } else {
        cout << "Node not found" << endl;
    }
}
   
