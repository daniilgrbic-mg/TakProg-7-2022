#include <bits/stdc++.h>

using namespace std;

long long fibonaci[100] = {};
// mozemo pisati `int64_t` umesto `long long`

int main() {
    fibonaci[1] = 0;
    fibonaci[2] = 1;
    for(int i = 3; i <= 50; i++) {
        fibonaci[i] = fibonaci[i-1] + fibonaci[i-2];
    }

    int t;
    cin >> t;
    for(int primer=0; primer<t; primer++) {
        int n;
        cin >> n;
        cout << fibonaci[n] << endl;
    }

    return 0;
}