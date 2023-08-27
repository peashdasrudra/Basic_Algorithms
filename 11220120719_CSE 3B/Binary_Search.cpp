#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;                                          // not_found
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);  
    cout << "Enter " << n << " Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter The Key to Search: ";
    cin >> target;

    int result = BinarySearch(arr, target);

    if (result != -1) {
       cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}

// Test Inputs (n=10) : {10 20 40 30 50 80 70 60 100 90}

//Peash Das Rudra_719_CSE3B