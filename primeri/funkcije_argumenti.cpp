#include <bits/stdc++.h>

using namespace std;

void uvecaj1(vector <int> niz) {
    for(int i = 0;i < niz.size(); i++)
        niz[i]++;

    for(int i = 0; i < niz.size(); i++)
        cout << niz[i] << " ";
    cout << endl;
}

void uvecaj2(vector <int> &niz) {
    for(int i = 0;i < niz.size(); i++)
        niz[i]++;
        
    for(int i = 0; i < niz.size(); i++)
        cout << niz[i] << " ";
    cout << endl;
}

int main() {
    vector <int> arr = {2, 6, 3, 1};

    uvecaj2(arr);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}