#include <bits/stdc++.h>
using namespace std;

int hoare(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {3, 8, 7, 6, 12, 10, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before: ";
    for (auto it : arr) cout << it << " ";
    cout << endl;

    int p = hoare(arr, 0, n - 1);

    cout << "After:  ";
    for (auto it : arr) cout << it << " ";
    cout << endl;

    cout << "Partition index: " << p << endl;
}