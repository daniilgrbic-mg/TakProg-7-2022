#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "Ja volim sladoled od jagode";
    string b = "ababacabadab";

    int poz = b.find("aba");
    while(poz != string::npos) {
        cout << "Ima rec na poz " << poz << endl;
        poz = b.find("aba", poz+1);
    }
}