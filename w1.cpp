#include<bits/stdc++.h>
using namespace std;

void leftShift(int A[], int n, int k) {
  if (k >= n) {
        k = n;
    }
    for (int i = 0; i < n - k;i++) {
        A[i] = A[i + k];
    }
for (int i = n - k; i < n; ++i) {
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

    leftShift(A, 6 , 3);
    printArray(A,6);

    return 0;
}

