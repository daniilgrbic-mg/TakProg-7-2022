#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graf = {
    {2, 4, 5},   // 0
    {4, 5},      // 1
    {0, 3, 4},   // 2
    {2},         // 3
    {0, 1, 2, 5},// 4
    {0, 1, 4}    // 5
};

// map<string, vector<string>> graf2 = {
//     {"Beograd",  {"Pancevo", "Obrenovac"}},
//     {"Pancevo",  {"Beograd", "Grad X"}},
// };

vector <bool> poseceni(6, false);

int main() {
    set <int> aktivni = {1};

    while(!aktivni.empty()) {
        cout << "Korak" << endl;
        set <int> sledeci;
        for(int cvor : aktivni) {
            poseceni[cvor] = true;
        }
        for(int cvor : aktivni) {
            for(int sused : graf[cvor]) {
                if(!poseceni[sused])
                    sledeci.insert(sused);
            }
        }
        for(int cvor : sledeci) {
            cout << cvor << endl;
        }
        aktivni = sledeci;
    }
}


