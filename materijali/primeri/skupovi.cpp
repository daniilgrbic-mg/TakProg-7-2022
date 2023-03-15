#include <bits/stdc++.h>

using namespace std;

int main() {

    set <int> skup;

    skup.insert(5); // ubacivanje elementa u skup
    skup.insert(5); // ostace samo jedna petica
    skup.insert(7);
    skup.insert(15);
    skup.insert(11);
    skup.insert(20);
    skup.insert(18);

    for(int el : skup) {
        cout << el << " ";
    }



}