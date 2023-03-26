#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> niz(8);
    map <string, string> recnik;

    recnik["pas"] = "dog";
    recnik["macka"] = "parrot";
    recnik["macka"] = "cat";

    cout << recnik["macka"] << endl;
    cout << recnik.size() << endl;
    
    if(recnik.count("kuca")) {
        cout << "nasao" << endl;
    }

    cout << recnik["kuca"] << endl;
}
