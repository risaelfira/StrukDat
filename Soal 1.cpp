#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Accessing elements
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << arr[5] << endl;  

    // Updating elements
    arr[2] = 17;
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;  

    // Inserting elements
    arr.insert(arr.begin() + 2, 25);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << std::endl;  

    // Deleting elements
    arr.erase(arr.begin() + 5);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;  
    // Searching elements
    bool found = find(arr.begin(), arr.end(), 25) != arr.end();
    cout << (found ? "True" : "False") << endl;  
    // Traversal
    for (int i : arr) {
        cout << i << " ";
    }
    std::cout << endl;

    // Sorting
    sort(arr.begin(), arr.end());
    for (int i : arr) {
        cout << i << " ";
    }
   cout << endl;  
    // Merging
    vector<int> arr2 = {9, 10, 11};
    arr.insert(arr.end(), arr2.begin(), arr2.end());
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;  
    return 0;
}