#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> niz = {1, 3, 10, 15, 20, 30, 32, 40};

    for(int i = 0; i < niz.size(); i++) {
        cout << niz[i] << " ";
    } cout << endl;

    cout << (niz.end()-niz.begin()) << endl;

/*
    Funkcije begin() i end() su pokazivaci (strelice) na 0-ti element,
    odnosno na kraj vektora.

        {1, 3, 10, 15, 20, 30, 32, 40} kraj
         |         |                   |
         begin     begin+3             end
    
    - Oduzimanjem niz.end()-niz.begin() dobijamo duzinu vektora niz.

    - Izraz *(strelica) je vrednost elementa na koji pokazuje strelica,
    dakle vrednost *(niz.begin()) je 1, a *(niz.begin()+3) je 15.

    - Funkcije lower_bound i upper_bound vrste binanru pretragu i vracaju
    strelicu na trazeni element. 
        - lower_bound vraca PRVI element VECI ili JEDNAK trazenom
        - upper_bound vraca PRVI element VECI od trazenog
    (pokrenite program da vidite kako to radi!)
*/

    auto poz = upper_bound(niz.begin(), niz.end(), 25);
    cout << "upper bound 25   broj:" << *poz << " id:" << poz - niz.begin() << endl;

    poz = lower_bound(niz.begin(), niz.end(), 25);
    cout << "lower bound 25   broj:" << *poz << " id:" << poz - niz.begin() << endl;

    poz = upper_bound(niz.begin(), niz.end(), 15);
    cout << "upper bound 15   broj:" << *poz << " id:" << poz - niz.begin() << endl;

    poz = lower_bound(niz.begin(), niz.end(), 15);
    cout << "lower bound 15   broj:" << *poz << " id:" << poz - niz.begin() << endl;

    bool nasao = binary_search(niz.begin(), niz.end(), 15); // ovo ce biti true
}