#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graf = {
    {2},     // 0
    {2, 3},      // 1
    {0, 1, 6},   // 2
    {1, 4, 5, 7},   // 3
    {3, 8},// 4
    {3},    // 5
    {2, 7}, // 6
    {3, 6, 8}, // 7
    {4, 7, 9}, // 8
    {8} // 9
};

// vector<vector<int>> graf = {
//     {},
//     {2, 3},
//     {1, 4},
//     {1, 4},
//     {2, 3}
// };

vector <bool> dodat(10, false);
vector <int> poreklo(10, -1);

void put_do(int cvor) {
    if(poreklo[cvor] == -1) {
        cout << cvor << endl;
        return;
    }
    put_do(poreklo[cvor]);
    cout << cvor << endl;
}

int main() {
    vector <int> red = {1};
    dodat[1] = true;
    int prvi = -1;

    while(prvi+1<red.size()) {
        prvi++;
        int trenutni = red[prvi];
        cout << "Obradjujem " << trenutni << endl;
        for(int sused : graf[trenutni]) {
            if(!dodat[sused]) {
                red.push_back(sused);
                poreklo[sused] = trenutni;
                dodat[sused] = true;
            }
        }
    }

    put_do(8);
}


