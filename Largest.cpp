#include<bits/stdc++.h>
using namespace std;

int findLargest(int A[], int n) {
    int largest = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i] > largest) {
            largest = A[i];
        }
    }
    return largest;
}

int main() {
    int A[] = {10, 20, 30, 40, 50, 60};

    cout << "Largest number: " << findLargest(A, 6) << endl;
    return 0;
}

