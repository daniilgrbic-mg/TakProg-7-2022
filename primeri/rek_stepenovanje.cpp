#include <bits/stdc++.h>

using namespace std;

long long spor_stepen(long long n, int stepen) {
    if(stepen == 0) return 1;
    else return n * spor_stepen(n, stepen-1);
}

long long stepen(long long n, int s) {
    if(s == 0) 
        return 1;

    long long polustepen = stepen(n, s/2);

    if(s % 2 == 0)
        return polustepen * polustepen;
    else
        return polustepen * polustepen * n;
}

/*
2^30 = (2^15) ^ 2
2^15 = (2^7) * (2^7) * 2
...
*/

int main() {
    cout << stepen(2, 60) << endl;
    return 0;
}