#include <bits/stdc++.h>

using namespace std;

struct Tacka {
    int x;
    int y;
};

bool poredi_tacke(struct Tacka a, struct Tacka b) {
    return (a.x*a.x + a.y*a.y) < (b.x*b.x + b.y*b.y);
}

int main() {
    vector <struct Tacka> tacke;
    tacke.push_back({3, 4});
    tacke.push_back({1, 0});
    tacke.push_back({0, 2});
    tacke.push_back({5, 4});
    tacke.push_back({2, 5});

    sort(tacke.begin(), tacke.end(), poredi_tacke);

    for(auto t : tacke) {
        cout << t.x << " " << t.y << endl;
    }
}