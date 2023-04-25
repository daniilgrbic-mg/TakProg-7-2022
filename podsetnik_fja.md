## Vektori (vector)

Vektor sluzi u iste svrhe kao niz  
Pristup elemntima je preko indeksa
```c++
vector <int> a;   // prazan vektor intova - O(1)
vector <int> b (100);  // vektor duzine 100 (sto nula) - O(100)
vector <int> c (100, 1);  // vektor sa 100 jedinica - O(100)
vector <int> d = b; // kopiras drugi vektor - O(duzina b)
vector <string> e = {"Ponedeljak", "Utorak", "Sreda"};
```
```c++
v.size();    // -> int   : duzina vektora v - O(1)
v.empty();   // -> bool  : da li je vektor prazan - O(1)
v.clear();   // void     : cisti vektor (duzina postaje nula) - O(1)
v.resize(n); // void     : postavlja duzinu vektora na n - O(n)
v.push_back(el); // void : ubacuje el na kraj vektora - O(1)
```
```c++
for(auto el : v) {
    cout << el << endl;
}
for(int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
}
```

## Skupovi (set)

Set nema indekse, i nema duplikate  
Direktan pristup elementima, ali mozemo efikasno da proverimo da li je element uopste u setu 
```c++
set <int> a;
set <int> b (vek.begin(), vek.end()); // kopiram vektor u set ali sklonim duplikate
```
```c++
// size i empty i clear (isto kao vektor)
s.insert(el); // ubaci element ako vec ne postroji - u proseku O(logN)
s.count(el); // 0 ako element ne postoji, 1 ako postoji - u proseku O(logN)
```
```c++
for(auto el : s) {
    cout << el << endl;
}
```


## Mape / recnici (map)

Mape su strukture kljuc:vrednost  
Pristup vrednostima se vrsi preko kljuca
```c++
map<char,int> first;
map<int,string> dani = {
    {1, "Monday"},
    {2, "Tuesday"},
    {3, "Wednesday"}
};
for(auto el : dani) {
    cout << el.first << " " << el.second << endl;
}
```
```c++
// size i empty i clear (isto kao vektor)
dani[4] = "Cetvrtak";                          // O(logN)
cout << dani[4];                               // O(logN)
dani.count(4); // -> 1 jer 4 postoji           // O(logN)
```


## Red (queue)

Red radi kao red u pravom zivotu  
- Ubacivanje elemenata na kraj
- Izbacivanje sa pocetka
FIFO - First In First Out
```c++
queue<int> red;
red.push(1);                      // red -> 1       // O(1)
red.push(2);                      // red -> 1 2
red.push(3);                      // red -> 1 2 3
cout << red.front(); // 1                           // O(1)
red.pop(); // izbacuje 1          // red -> 2 3     // O(1)
cout << red.front(); // 2
```

## Stack (stack)

Stek radi kao [hanojske kule](https://sr.wikipedia.org/sr-el/%D0%A5%D0%B0%D0%BD%D0%BE%D1%98%D1%81%D0%BA%D0%B0_%D0%BA%D1%83%D0%BB%D0%B0)  
Ubacivanje ide na vrh   
Izbbacivanje takodje sa vrha  
LIFO - Last in First Out

```c++
stack <int> kula;
kula.push(1);    // kula -> 1
kula.push(2);    // kula -> 1 2
kula.push(3);    // kula -> 1 2 3
cout << kula.top(); // 3
kula.pop();      // kula -> 1 2
kula.push(4);    // kula -> 1 2 4
```