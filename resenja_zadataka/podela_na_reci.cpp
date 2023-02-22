#include <bits/stdc++.h>

using namespace std;

int main() {
    string linija;
    getline(cin, linija);

    // ideja je da trazimo razmak i da ispisujemo rec do razmaka,
    // pa sledeca rec krece jedan karakter posle tog razmaka, ITD
    
    // kako nakon poslednje reci nema razmaka, dodajemo ga da bi isti
    // algoritam radio i tu:
    linija += " ";

    int pocetak_reci = 0;
    int razmak = linija.find(" ");
    while(razmak != string::npos) {
        cout << linija.substr(pocetak_reci, razmak-pocetak_reci) << endl;
        pocetak_reci = razmak + 1;
        razmak = linija.find(" ", pocetak_reci); // trazimo sledeci razmak posle reci
    }
    return 0;
}