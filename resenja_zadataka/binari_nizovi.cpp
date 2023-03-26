// republicko 2018 "Binarni nizovi"

#include <bits/stdc++.h>

using namespace std;

string niska_n_puta(int n, string s) {
    string rez = "";
    for(int i = 0; i < n; i++)
        rez += s;
    return rez;
}

void binarni_niz(int n, string b) {
    cout << niska_n_puta(b.size(), " ") << "bin " << b << endl;
    
    if(b.size() == n) {
        cout << b << endl;
    }
    else {
        binarni_niz(n, b+"0");
        if(b.size()==0 || b[b.size()-1]=='0') {
            binarni_niz(n, b+"1");
        }
    }
}

int main() {
    int n = 3;
    //cin >> n;
    binarni_niz(n, "");
}
