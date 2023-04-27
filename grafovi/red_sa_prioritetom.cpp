#include <bits/stdc++.h>

using namespace std;

int main() {
    set <int> nesto;

    nesto.insert(5);
    nesto.insert(1);
    nesto.insert(8);
    nesto.insert(2);
    nesto.insert(7);

    nesto.erase(nesto.begin());

    for (auto el : nesto) {
        cout << el << endl;
    }

    // najmanji element u setu
    cout << *(nesto.begin()) << endl;

    // #################################################

    priority_queue <int> red_max; // maxheap
    priority_queue <int, vector<int>, greater<int>> red; // minheap

    red.push(5);
    red.push(1);
    red.push(8);
    red.push(2);
    red.push(7);

    while(!red.empty()) {
        cout << red.top() << endl;
        red.pop();
    }


}