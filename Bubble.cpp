#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int A[], int Size) {
    for (int i = 0; i < Size - 1; i++) {
        for (int j = 0; j < Size - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void print(int A[],int n){

 for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    int A[] = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(A,7);
    print( A,7);
    return 0;
}

