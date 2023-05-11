#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *niz;

    niz = new int[n];

    niz[0] = 5;
    niz[1] = 4;
    niz[2] = 10;

    for (int i= 0; i < 3; i++)
        cout << niz[i] << endl;

    delete[] niz;
}
