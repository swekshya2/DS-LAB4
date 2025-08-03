#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // Target not found
    return -1;
}

int main() {
    int arr[] = {2, 4, 7, 10, 14, 19, 25}; // sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Number found at index " << result << endl;
    else
        cout << "Number not found in the array." << endl;

    return 0;
}
