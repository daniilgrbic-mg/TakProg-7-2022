#include <bits/stdc++.h>

using namespace std;

int n, cena;
vector<vector<int>> graf;
vector<vector<int>> drvo;
long long ukupno = 0;
long long najmanje_ukupno = LONG_LONG_MAX;

int obidji(int cvor) {
    int plata = cena;
    for(auto dete : drvo[cvor]) {
        plata += obidji(dete);
    }
    // cout << "  Plata tenisera " << cvor << " je " << plata << endl;
    ukupno += plata;
    return plata;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> cena;

    graf.resize(n+1);
    for(int i = 1; i <= n; i++) {
        int ai;
        cin >> ai;
        for(int j = 0; j < ai; j++) {
            int b;
            cin >> b;
            graf[b].push_back(i);
        }
    }

    for(int koren = 1; koren <= n; koren++) {

        // cistka
        drvo.clear();
        drvo.resize(n+1);

        vector <bool> ubaceno(n+1, false);
        queue <int> red;

        red.push(koren); // ubacivanje na kraj reda
        ubaceno[koren] = true;

        while (!red.empty()) {
            int trenutni = red.front();  // vidi prvi element
            red.pop();  // 
            for(auto sused : graf[trenutni]) {
                if(!ubaceno[sused]) {
                    drvo[trenutni].push_back(sused);
                    ubaceno[sused] = true;
                    red.push(sused);
                }
            }
        }

        // cout << "Drvo nastalo iz korena " << koren << " je:" << endl;
        // for(int cvor = 1; cvor <= n; cvor++) {
        //     cout << cvor << " : ";
        //     for(auto dete : drvo[cvor]) {
        //         cout << dete << " ";
        //     }
        //     cout << endl;
        // }

        int broj_dece = 0;
        for(int cvor = 1; cvor <= n; cvor++) {
            broj_dece += drvo[cvor].size();
        }
        if (broj_dece != n-1) {
            continue;
        }

        // cout << "Obilazim iz korena " << koren << endl;
        ukupno = 0;
        obidji(koren);
        if (ukupno < najmanje_ukupno)
            najmanje_ukupno = ukupno;
    }
    cout << najmanje_ukupno << endl;
    return 0;
}

/*
4 100
1 4
3 1 3 4
2 1 2
1 3
*/