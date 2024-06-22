#include<bits/stdc++.h>
using namespace std;

int linearSearch(int A[], int n, int value) {
    for (int i = 0; i < n; ++i) {
        if (A[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[] = {10, 20, 30, 40, 50, 60};

    int index = linearSearch(A, 6, 30);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}

