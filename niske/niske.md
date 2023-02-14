# Niske 

- uz pomoc niski radimo sa tekstualnim podacima
- niska je *de facto* niz karaktera
- niske pruzaju red korisnih funkcija za manipulaciju tekstom

### Deklaracija niski

Postoji vise nacina da se napravi niska, dva najprostija i za nas dovoljna su:
```c
// deklaracija sa dodelom vrednosti
string s = "Ja volim sladoled";

// konstruktor: nekooliko istih karaktera
string b(5, '*');  // -> "*****" 
```

Obratite paznju na to da se niske zapisuju unutar duplih navodnika `"`, a karakteri unutar jednostrukih `'`. 

### Standardi ulaz

Stringove mozemo uneti koristeci `cin`, ali bitno je voditi racuna o tome da `cin` prihvata sve do prvog razmaka. Dakle da bismo uneli na primer ime i prezime, potrebno je da unesemo 2 stringa.
```c
string ime, prezime;
cin >> ime >> prezime;
```

Postoji i nacin da se unese vise reci odjednom, odnosno citav red do prvog prelaza u sledeci red:
```c
string red;
getline(cin, red);
```

### Konkatenacija niski

```c
string a = "ab";
string b = a + a; // "abab"
string c = a + " " + b; // "ab abab"
```

### Niske i [ ]

Kao i kod nizova, mozemo pristupati, a i menjati pojedine karaktere uz pomoc indeksa:
```c
string s = "abc";
cout << s[1] << endl; // 'b'
s[2] = 'e';
cout << s << endl; // "abe"
```

### Funkcija `substr`

`s.substr(poz, n)` je funkcija koja stvara nisku duzine `n` pocevsi od karaktera niske `s` na poziciji `poz`. Ukoliko se ne navede `n`, uzimamo sve karaktere do kraja.
```c
string s = "Ja volim sladoled";
string a = s.substr(3, 5);  // "volim"
string b = s.substr(3);  // "volim sladoled"
```

### Funkcija `size`

`s.size()` vraca duzinu neke niske. Pogodono je na primer za petlje:
```c
string s = "abc";
for(int i = 0; i < s.size(); i++) {
    cout << s[i] << endl;
}
```
ispisuje:
```
a
b
c
```

### Funkcija `find`

- `s.find(a)` vraca poziciju prvog pojavljivanja niske `a` u `s`.  
- `s.find(a, pocetak)` takodje trazi `a` u `s` pocevsi od pozicije `pocetak`
- Ukoliko ne uspe na nadje trazenu nisku, find vraca `string::npos`

```c
string s = "Takprog 2023";
string a = "prog";

int nasao = s.find(a);
if(nasao == string::npos) {
    cout << "Nismo nasli " << a << endl;
}
else {
    cout << "Pronasli smo " << a << " na poziciji " << nasao << endl;
}
```
