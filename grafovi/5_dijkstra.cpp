#include <bits/stdc++.h>

using namespace std;

vector <vector<pair<int,int>>> graf;
set <pair<int,int>> red;
vector <bool> poseceni;

int main() {
    int n;
    cin >> n;
    graf.resize(n+1);

    int a, b, duz;
    while(cin >> a >> b >> duz) {
        graf[a].push_back({b, duz});
        graf[b].push_back({a, duz});
    }

    poseceni.resize(n+1);
    red.insert({0, 1});
    while(!red.empty()) {
        pair <int,int> najmaji = *red.begin();
        int cena = najmaji.first;
        int cvor = najmaji.second;
        red.erase(red.begin());

        if (poseceni[cvor]) continue;
        poseceni[cvor] = true;       

        cout << "Najkraci put do " << cvor << " ima duzinu " << cena << endl; 

        for(pair <int,int> el : graf[cvor]) {
            int sused = el.first;
            int duzina_grane = el.second;
            red.insert({cena+duzina_grane, sused});
        }
    }
}

/*
6
1 2 7
1 3 9
1 6 14
2 3 10
2 4 15
3 6 2
3 4 11
4 5 6
6 5 9
*/