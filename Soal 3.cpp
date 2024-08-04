#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int choice, value;

    cout << "Queue Operations Menu:\n";
    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.push(value);
                break;
            case 2:
                if (!q.empty()) {
                    value = q.front();
                    q.pop();
                    cout << "Dequeued value: " << value << endl;
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
