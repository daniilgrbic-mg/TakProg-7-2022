#include <bits/stdc++.h>

using namespace std;

void mojSwap(int &a, int &b) {
    int x;
    x = a;
    a = b;
    b = x;
}

int main() {
    int a = 5;
    int b = 7;
    mojSwap(a, b);
    cout << a << " " << b << endl;    
    return 0;
}