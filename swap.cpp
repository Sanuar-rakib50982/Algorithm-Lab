#include<bits/stdc++.h>
using namespace std;

void Swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "x: " << a << ", y: " << b << endl;
}

int main() {
    int x = 5, y = 10;
    Swap(x, y);

    return 0;
}
