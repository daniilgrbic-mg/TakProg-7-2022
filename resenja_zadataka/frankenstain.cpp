#include <bits/stdc++.h>

using namespace std;

int main() {
    string pocetnarec;
    cin >> pocetnarec;

    string rezultat;

    int poz, duz;
    while(cin >> poz >> duz) {
        rezultat += pocetnarec.substr(poz, duz);
    }
    cout << rezultat << endl;
    return 0;
}
