#include<bits/stdc++.h>
using namespace std;

void insertionSort(int A[], int Size) {
    for (int i = 1; i < Size; i++) {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
void print(int A[],int n){

 for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    int A[] = {64, 25, 12, 22, 11};

    insertionSort(A,5);
     print( A,5);

    return 0;
}
