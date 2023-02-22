#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int poz = a.find(b);
    while(poz != string::npos) {
        a.erase(poz, b.size());
        poz = a.find(b);
    }

    cout << a << endl;
    return 0;
}