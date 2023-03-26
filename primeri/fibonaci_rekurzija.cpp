#include <bits/stdc++.h>

using namespace std;

int broj_poziva;

int fibonaci(int n) {
    broj_poziva++;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonaci(n-1) + fibonaci(n-2);
}

map <int, unsigned long long> kes;
unsigned long long fibonaci_sa_kesiranjem(int n) {
    broj_poziva++;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    if(kes.count(n) == 0) {
        unsigned long long rez = 
            fibonaci_sa_kesiranjem(n-1) +
            fibonaci_sa_kesiranjem(n-2);
        kes[n] = rez;
        return rez;
    }
    else {
        return kes[n];
    }
}

// 0 1 1 2 3 5 8 13 21 34 55 89 ...
// 0 1 2 3 4 5 6 7  8  9  10 11 ...
int main() {
    
    broj_poziva = 0;
    cout << fibonaci(40) << endl;
    cout << "Broj pozviva: " << broj_poziva << endl;

    broj_poziva = 0;
    cout << fibonaci_sa_kesiranjem(40) << endl;
    cout << "Broj pozviva: " << broj_poziva << endl;

    return 0;
}
