#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 0, 1, 0, 1, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currentLength++;
        } else {
            // Update maxLength if the current sequence of 1s is longer
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 0; // Reset currentLength for next sequence
        }
    }

    // Check the last sequence if it's the longest
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    cout << "The length of the longest contiguous subarray with only 1s is: " << maxLength << endl;

    return 0;
}
