#include <iostream>
using namespace std;

int main() {
    // Initialize an array
    int a[] = { 8, 7, 6, 5, 2, 4, 1, 3, 9 };
    
    // Calculate the length of the array
    int arrayLength = sizeof(a) / sizeof(int);

    // Bubble sort algorithm to sort the array in ascending order
    for (int i = 0; i < arrayLength; i++) { // Loop through each element in the array
        for (int j = 0; j < arrayLength - 1; j++) { // Iterate up to the second-to-last element
            if (a[j] > a[j + 1]) { // If the current element is greater than the next element
                // Swap the elements
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < arrayLength; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
