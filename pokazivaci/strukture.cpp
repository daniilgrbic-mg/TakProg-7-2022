#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Covek {
    string ime;
    string prezime;
    int godina_rodjenja;
};

int main() {
    struct Covek ljudi[3] = {
        { "Daniil", "Grbic", 2001 },
        { "Aleksa", "Nikolic", 2009 },
        { "Kosta", "Lukic", 2004 }
    };

    vector <struct Covek> vek = {
        { "Daniil", "Grbic", 2001 },
        { "Aleksa", "Nikolic", 2009 },
        { "Kosta", "Lukic", 2004 }
    };

    for(int i = 0; i < 3; i++) {
        cout << ljudi[i].ime << endl;
    }

    for(auto covek : vek) {
        cout << covek.prezime << endl;
    }
}
