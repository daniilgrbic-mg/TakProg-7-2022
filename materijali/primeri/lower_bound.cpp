#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> niz = {1, 3, 10, 15, 20, 30, 32, 40};

    for(int i = 0; i < niz.size(); i++) {
        cout << niz[i] << " ";
    } cout << endl;

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