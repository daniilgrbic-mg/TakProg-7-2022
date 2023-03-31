#include <bits/stdc++.h>

using namespace std;

int main() {
    map <int, int> brojac;
    int n;
    cin >> n;

    int maxbroj = 0;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        brojac[a]++;
        if(brojac[a] >= 2) {
            maxbroj = max(maxbroj, a);
        }
    }

    if(maxbroj == 0) {
        cout << "nema" << endl;
    }
    else {
        cout << maxbroj << endl;
    }

    // pair <string,string> covek = {"Daniil", "Grbic"};
    // covek.first = "Branko";
    // cout << covek.first << " " << covek.second << endl;

    // for(pair<int,int> stavka : brojac) {
    //     cout << stavka.first << " " << stavka.second << endl;
    // }
    // for(auto stavka : brojac) {
        
    // }

    // vector <int> niz = {2, 6, 3, 9, 1, 2}; 
    // for(int el : niz) {
    //     cout << el << " ";
    // }
    // cout << endl;

    return 0;
}