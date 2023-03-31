// Drazvno 2022, Dokaz

#include <bits/stdc++.h>

using namespace std;

/*
80=40+40
40=20+20
20=10+10
10=5+5
5=4+1
4=2+2
2=1+1

51=50+1
50=25+25
25=24+1
24=12+12
*/

void dokaz(int n) {
    if(n == 2) 
        cout << "2=1+1" << endl;
    else {
        if(n % 2 == 1) {
            dokaz(n-1);
            cout << n << "=1+" << n-1 << endl;
        }
        else {
            dokaz(n/2);
            cout << n << "=" << n/2 << "+" << n/2 << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    dokaz(n);
    return 0;
}