#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct Tacka {
    int x;
    int y;
    string label;
};

struct Duz {
    struct Tacka start;
    struct Tacka end;
};

float duzina(struct Duz duz) {
    int x_rast = duz.start.x - duz.end.x;
    int y_rast = duz.start.y - duz.end.y;
    return sqrt(x_rast*x_rast + y_rast*y_rast);
}

int main() {
    struct Duz duz = {
        { 0, 0, "O" },
        { 3, 4, "A" }
    };

    cout << duzina(duz) << endl;
}