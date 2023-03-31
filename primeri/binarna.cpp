#include <bits/stdc++.h>

using namespace std;

int pretraga(int n, vector<int> &niz, int l, int d) {
    cout << "(" << l << "," << d <<")" << endl;
    int sred = (l+d)/2;
    if(n == niz[sred])
        return sred;
    else if(n > niz[sred])
        return pretraga(n, niz, sred+1, d);
    else
        return pretraga(n, niz, l, sred);
}

/*
74
 0-32 sred=16 -> 60 < 74 -> gledamo desno
17-32 sred=  
*/

int main() {
    vector <int> niz = {3, 4, 8, 15, 18, 22, 25, 31, 36, 37, 43, 47, 49, 50, 52, 53, 60, 62, 63, 64, 65, 66, 68, 70, 71, 74, 77, 79, 81, 91, 95, 99};
    //                  0  1  2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31
    
    vector <int> trazim = {95, 53, 74};
    for(int test = 0; test < trazim.size(); test++) {
        cout << "Trazim " << trazim[test] << endl;
        cout << pretraga(trazim[test], niz, 0, niz.size()) << endl;
    }
    return 0;
}