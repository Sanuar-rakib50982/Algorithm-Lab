#include<bits/stdc++.h>
using namespace std;


void rotateLeft(int A[], int n, int k) {
    k = k % n;
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[i] = A[(i + k) % n];
    }
    for (int i = 0; i < n; i++) {
        A[i] = temp[i];
    }
}

void printArray(int A[],int n){

 for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50, 60};

    rotateLeft(A, 6, 3);
     printArray(A,6);

    return 0;
}
