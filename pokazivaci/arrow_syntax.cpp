#include <iostream>

using namespace std;

struct Covek {
    string ime;
    string prezime;
    int godina_rodjenja;
};

int main() {
    struct Covek nasteku = Covek {
        "Daniil",
        "Grbic",
        2001
    };

    struct Covek* naheapu = new Covek {
        "Nikola",
        "Aleksic",
        2009
    };

    cout << nasteku.ime << " " << nasteku.prezime << endl;

    cout << naheapu->ime << " " << naheapu->prezime << endl;

    cout << (*naheapu).ime << " " << (*naheapu).prezime << endl;
}