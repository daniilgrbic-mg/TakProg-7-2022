#include <bits/stdc++.h>

using namespace std;

/*
Ideja je da brojimo prvi karakter svake reci, to je 
a) ili prvi karakter u niski
b) ili bilo koji karakter ispred kog ima razmak
*/

int main() {
    string recenica;
    getline(cin, recenica);

    int broj_reci = 0;
    for(int i = 0; i < recenica.size(); i++) {
        // prvi karakter u redu i nije razmak, dakle pocetak je reci
        if(i == 0 && recenica[i] != ' ') { 
            broj_reci++;
        }
        // ispred slova na poziciji i ima razmak, pa je pocetak reci
        else if(recenica[i] != ' ' && recenica[i-1] == ' ') {
            broj_reci++;
        }
    }

    cout << broj_reci << endl;
    return 0;
}