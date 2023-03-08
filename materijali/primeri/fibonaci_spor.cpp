#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int primer=0; primer<t; primer++) {
        int n;
        cin >> n;

        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        if(n == 2) {
            cout << 1 << endl;
            continue;
        }
        int a = 0;
        int b = 1;
        int c;
        for(int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << endl;
    }
    return 0;
}