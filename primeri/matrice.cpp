#include <bits/stdc++.h>

using namespace std;

int niz[3] = {};    // deklaracija niza sa 3 elemnta
int mat[3][4] = {}; // deklaracija matrice (tabele) sa 3 vrste i 4 kolone

// mat:
//  0 0 0 0 - 0. red
//  0 0 0 0 - 1. red
//  0 0 0 0 - 2. red
//  | | | |
//  0 1 2 3 kolone

int main() {
    int n = 3, m = 4;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        // ipsisujemo i-ti red
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " "; // ispisujemo j-ti element u i-tom redu
        }
        cout << endl; // na kraju reda naravno ide endl
    }

    return 0;
}