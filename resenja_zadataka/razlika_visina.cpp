// republicko 2019 "Razlika visina"

#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, n;
    cin >> r >> n;

    vector <int> deca(n);
    map <int, int> mapa;
    for(int i = 0; i < n; i++) {
        int visina;
        cin >> visina;
        deca[i] = visina;
        mapa[visina]++;
    }

    int broj_parova = 0;
    for(int i = 0; i < n; i++) {
        broj_parova += mapa[deca[i]-r];
        //broj_parova += mapa[deca[i]+r];
    }
    cout << broj_parova << endl;
}