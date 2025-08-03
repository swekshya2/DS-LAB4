#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key)
            return i; // Return index if found
    }
    return -1; // Not found
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Number found at index " << index << endl;
    else
        cout << "Number not found in the array." << endl;

    return 0;
}
