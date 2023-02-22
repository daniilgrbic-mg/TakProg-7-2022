#include <bits/stdc++.h>

using namespace std;

int main() {
    string b = "ababacabadab";
    //          ^.^..   ^..

    int poz = b.find("aba");
    while(poz != string::npos) {
        cout << "Ima rec na poz " << poz << endl;

        // sledece pojavljivanje trazimo od drugog slova prethodno nadjenog, da ne dobijamo uvek istu stvar
        poz = b.find("aba", poz+1); 
    }
}