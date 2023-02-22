#include <bits/stdc++.h>

using namespace std;

int main() {
    string rec;
    int ukupno = 0;

    // petlja se ponavlja sve dok unosimo reci, a prekida 
    // se kada stignemo do "kraja" ulaza (krajem se obicno 
    // smatra kraj fajla, ali ukoliko unosimo podatke sa 
    // tastature, kraj se "desi" kada stisnemo tastere 
    // Ctrl+z (Windows) ili Ctrl+d (Linux))
    while(cin >> rec) {
        ukupno++;
    }

    cout << "Ukupno ima " << ukupno << " reci" << endl;
    return 0;
}