#include <iostream>
using namespace std;

struct SNode {
    int data;
    SNode* next;
};


struct DNode {
    int data;
    DNode* next;
    DNode* prev;
};

struct CNode {
    int data;
    CNode* next;
};

class LinkedList {
private:
    SNode* sHead;
    DNode* dHead;
    CNode* cHead;

public:
    LinkedList() {
        sHead = nullptr;
        dHead = nullptr;
        cHead = nullptr;
    }

    void InsertS(int value) {
        SNode* newNode = new SNode();
        newNode->data = value;
        newNode->next = nullptr;

        if (sHead == nullptr) {
            sHead = newNode;
        } else {
            SNode* temp = sHead;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void InsertD(int value) {
        DNode* newNode = new DNode();
        newNode->data = value;
        newNode->next = nullptr;

        if (dHead == nullptr) {
            dHead = newNode;
            newNode->prev = nullptr;
        } else {
            DNode* temp = dHead;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void InsertC(int value) {
        CNode* newNode = new CNode();
        newNode->data = value;
        newNode->next = nullptr;

        if (cHead == nullptr) {
            cHead = newNode;
            cHead->next = cHead; // point to itself for circularity
        } else {
            CNode* temp = cHead;
            while (temp->next != cHead) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = cHead;
        }
    }

    void DisplayS() {
        SNode* temp = sHead;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void DisplayD() {
        DNode* temp = dHead;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void DisplayC() {
        if (cHead == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        CNode* temp = cHead;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != cHead);
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.InsertS(1);
    list.InsertS(2);
    list.InsertS(3);
    cout << "Single Linked List: ";
    list.DisplayS();

    list.InsertD(4);
    list.InsertD(5);
    list.InsertD(6);
    cout << "Double Linked List: ";
    list.DisplayD();

    list.InsertC(7);
    list.InsertC(8);
    list.InsertC(9);
    cout << "Circular Linked List: ";
    list.DisplayC();

    return 0;
}

