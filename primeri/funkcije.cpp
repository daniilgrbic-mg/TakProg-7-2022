#include <bits/stdc++.h>

using namespace std;

/*
tip naziv(tip1 arg1, tip2 arg2, ...) {

}
*/

int minimum(int a, int b) {
    if(a < b)
        return a;
    return b;
}

// niska_n_puta(5, "ab")   -> "ababababab"
string niska_n_puta(int n, string s) {
    string rez = "";
    for(int i = 0; i < n; i++)
        rez += s;
    return rez;
}

void pozdrav(string ime) {
    cout << "Pozdrav, " << ime << "!" << endl;
}

// 0 1 1 2 3 5 8 13 21 34 55 89 ...
// 0 1 2 3 4 5 6 7  8  9  10 11 ...
int broj_poziva = 0;
map <int, int> cache;
int fib(int n) {
    broj_poziva++;

    if(cache.count(n) == 1) {
        return cache[n];
    }

    int rez;
    if(n == 0) 
        rez = 0;
    else if(n == 1) 
        rez = 1;
    else 
        rez = fib(n-1)+fib(n-2);
    
    cache[n] = rez;
    return rez;
}

int main() {
    pozdrav("Aleksa");
    cout << niska_n_puta(5, "a") << endl;
    cout << fib(20) << endl;
    cout << broj_poziva << endl;
}