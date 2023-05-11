#include <iostream>
#include <vector>

using namespace std;

void uvecaj1(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        v[i]++;
    }
}

void uvecaj2(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        v[i]++;
    }
}

int main() {
    vector <int> niz = {1, 2, 3, 4, 5};

    for(auto it : niz) {
        cout << it << " ";
    } cout << endl;

    uvecaj1(niz);

    for(auto it : niz) {
        cout << it << " ";
    } cout << endl;

    uvecaj2(niz);

    for(auto it : niz) {
        cout << it << " ";
    } cout << endl;
}
