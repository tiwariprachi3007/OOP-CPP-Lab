#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxSum = -1000000;

    // Check every starting index
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int len = 1;
        int index = i;

        // Take groups of size 1, 2, 3, ...
        while (index + len <= n) {

            // Add current group
            for (int j = index; j < index + len; j++) {
                sum += a[j];
            }

            // Move to next group
            index += len;
            len++;
        }

        // Update maximum special sum
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    // Print answer
    cout << maxSum;

    return 0;
}