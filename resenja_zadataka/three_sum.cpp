#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 9;
    vector <int> niz = {-8, -5, 7, 4, 1, -2, 9, -3, 2};

    // for(int i = 0; i < niz.size(); i++) {
    //     for(int j = i+1; j < niz.size(); j++) {
    //         for(int k = j+1; k < niz.size(); k++) {
    //             if(niz[i]+niz[j]+niz[k]==0) {
    //                 cout << niz[i] << " " << niz[j] << " " << niz[k] << endl;
    //             }
    //         }
    //     }
    // }

    // 1000*1000*1000
    // 1000*1000*10

    map <int, int> ponav;
    for(auto e : niz)
        ponav[e] = 1;

    // map <int, int> ponav;
    // for(auto e : niz)
    //     ponav.insert(pair<int,int>{e, 1});
    
    // set <int> ponav;
    // for(auto e : niz) 
    //     ponav.insert(e);

    // set <int> ponav (niz.begin(), niz.end());

    int rezultat = 0;
    for(int i = 0; i < niz.size(); i++) {
        for(int j = 0; j < niz.size(); j++) {
            int a = niz[i];
            int b = niz[j];
            int c = 0-a-b;
            if(a < b && b < c && ponav.count(c) > 0) {
                cout << a << " " << b << " " << c << endl;
                rezultat++;
            }
        }
    }

    cout << rezultat << endl;

    return 0;
}