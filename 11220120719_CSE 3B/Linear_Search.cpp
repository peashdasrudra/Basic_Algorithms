#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;                                 // found
        }
    }
    return -1;                                        // not_found
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the key to search: ";
    cin >> target;

    int index = linearSearch(arr, size, target);

    if (index != -1) {
        cout << "Target found at index: " << index << std::endl;
    } else {
        cout << "Target not found!" << std::endl;
    }

    return 0;
}

// Test Inputs (n=10) : {10 20 40 30 50 80 70 60 100 90}

//Peash Das Rudra_719_CSE3B