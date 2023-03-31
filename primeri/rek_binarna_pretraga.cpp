#include <bits/stdc++.h>

using namespace std;

int pretraga(int n, int l, int d, vector<int> niz) {
    if(l >= d) {
        return -1;
    }
    cout << "trazim " << n << " na (" << l << "," << d << ")" << endl;
    int m = (l+d)/2;
    if(niz[m] == n) {
        return m;
    }
    else if (niz[m] < n) {
        return pretraga(n, m+1, d, niz);
    }
    else if (niz[m] > n) {
        return pretraga(n, l, m, niz);
    }
}

int main() {
    vector <int> niz = {3, 4, 8, 15, 18, 22, 25, 31, 36, 37, 43, 47, 49, 50, 52, 53, 60, 62, 63, 64, 65, 66, 68, 70, 71, 74, 77, 79, 81, 91, 95, 99};
    //                  0  1  2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31
    
    vector <int> trazim = {95, 53, 74, 67, 1, 51};
    for(auto n : trazim) {
        cout << "Primer: n=" << n << endl;
        cout << pretraga(n, 0, 32, niz) << endl << endl;
    }
    
    return 0;

}