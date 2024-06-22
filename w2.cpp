#include<bits/stdc++.h>
using namespace std;

void rightSift(int A[], int n, int k) {
    if (k >= n) {
        k = n;
    }
    for (int i = n - 1; i >= k; --i) {
        A[i] = A[i - k];
    }
    for (int i = 0; i < k; ++i) {
        A[i] = 0;
    }
}

void printArray(int A[],int n){

 for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50, 60};

    rightSift(A, 6, 3);
    printArray(A,6);

    return 0;
}
