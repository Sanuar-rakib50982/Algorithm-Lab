#include<bits/stdc++.h>
using namespace std;

int findSmallest(int A[], int n) {
    int smallest = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i] < smallest) {
            smallest = A[i];
        }
    }
    return smallest;
}

int main() {
    int A[] = {10, 20, 30, 40, 50, 60};

    cout << "Smallest number: " << findSmallest(A, 6) << endl;
    return 0;
}

