#include <bits/stdc++.h>

using namespace std;

int nzd(int a, int b) {
    cout << "racunam nzd " << a << " i " << b << endl;
    if(a == 0 || b == 0) 
        return a+b;
    
    if(a > b)
        return nzd(a%b, b);
    else
        return nzd(b%a, a);
}

int main() {
    int a, b;
    cin >> a >> b;
    int d = nzd(a, b);
    cout << d << endl;
    return 0;
}