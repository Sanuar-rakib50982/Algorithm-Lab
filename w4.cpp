#include<bits/stdc++.h>
using namespace std;

void deleteItem(int A[], int n, int i) {
    if (i < 0 || i >= n) {
        cout << "Invalid index "<<endl;
        return;
    }
    for (int j = i; j < n - 1; ++j) {
        A[j] = A[j + 1];
    }
    n--;
}

void printArray(int A[],int n){

 for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50, 60};

    deleteItem(A, 6 , 2);
     printArray(A,6);

    return 0;
}
