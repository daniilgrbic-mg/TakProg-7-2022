#include <bits/stdc++.h>

using namespace std;

// komparator vrat true kada a treba da ide pre b, inace vrati false
bool neparni_sort(int a, int b) {
    if(a%2 == b%2) {
        // ukoliko su a i b iste parnosti, poredimo ih normalno:
        return a<b; // true ako je a<b, tj a ide pre b
    }
    if(a%2==1) {
        // a je neparan, a b je paran, pa a ide pre b
        return true;
    }
    if(b%2==1) {
        // bje paran, a nije, vracamo false
        return false;
    }
}

int main()
{
    vector <int> prazan_vektor_intova;
    vector <int> vektor_sa_datim_vrednostima = {1, 2, 3, 4, 5};
    vector <int> sa_8_nula (8); // isto smo mogli da stavimo vektor(8, 0)
    vector <int> sa_10_petica (10, 5);
    vector <string> pet_cao (5, "cao");

    vektor_sa_datim_vrednostima.push_back(6); // dodajemo 6 na kraj vektora

    vector <int> za_sort = {1, 4, 2, 3, 7, 6, 5, 9, 8, 0};

    // sortira vektor u rastucem poretku
    cout << "Rastuci sort:" << endl;
    sort(za_sort.begin(), za_sort.end());
    for(int i = 0; i < za_sort.size(); i++) {
        cout << za_sort[i] << " ";
    }
    cout << endl;

    // sortira vektor prema parnosti (komparator funkcija)
    cout << "Neparni sort:" << endl;
    sort(za_sort.begin(), za_sort.end(), neparni_sort);
    for(int i = 0; i < za_sort.size(); i++) {
        cout << za_sort[i] << " ";
    }
    cout << endl;

    // sortira vektor u obrnutom redosledu (moze i sa komparatorom)
    cout << "Obrnuti sort:" << endl;
    sort(za_sort.rbegin(), za_sort.rend());
    for(int i = 0; i < za_sort.size(); i++) {
        cout << za_sort[i] << " ";
    }
    cout << endl;

    for(int el : za_sort) {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}
