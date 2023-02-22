#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int br = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a') {
            br++;
        } 
    }
    cout << br << endl;
    return 0;
}