# TakProg-7

### Materijali i linkovi

- [**Petljina zbirka sa zadacima i resenjima (pdf)**](https://petljamediastorage.blob.core.windows.net/root/Media/Default/Kursevi/Zbirka/Zbirka1cpp.pdf)
- Testirati zadatke iz zbirke mozete [na petlji](https://petlja.org/biblioteka/r/kursevi/Zbirka)
- Za proucavanje C++ sintakse korisno je nauciti da koristite reference poput [cplusplus.com](https://cplusplus.com/reference/) (gore u pretrazi trazite sta vas zanima, na primer `string` za niske, pa mozete da vidite pregled funkcija nad niskama kao sto su `substr` i `find` kao i primere kodova)
- Vizualizacija grafova: [*csacademy.com/app/graph_editor/*](https://www.csacademy.com/app/graph_editor/)
- Olican sajt za ucenje algoritama: [*cp-algorithms.com*](https://cp-algorithms.com/)

### 27. April (online) - trazenje najkraceg puta (Dijkstra)
- [Dajkstrin algoritam (vikipedija)](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)
- [Dajkstrin algoritam (kod)](/grafovi/5_dijkstra.cpp)
- [Red sa prioritetom (koristeci `set` i `priority_queue`)](/grafovi/red_sa_prioritetom.cpp)

### 25. April (online) - grafovi
- [Reprezentacija](/grafovi/1_reprezentacija.cpp)
- [BFS](/grafovi/2_bfs.cpp)
- [BFS + put](/grafovi/3_bfs_put.cpp)
- [Udruzenje Tenisera - SIO 2021](/grafovi/udruzenje.cpp)
- [Podsetnik funkcija](./podsetnik_fja.md)

### 29. Mart - zadaci iz rekurzije i mapa
- [Prosledjivanje argumenata po vrednosti i po adresi](/primeri/funkcije_argumenti.cpp)
- [Efikasno racunanje stepena](/primeri/rek_stepenovanje.cpp)
- [Rekurzivni NZD](/primeri/rek_binarna_pretraga.cpp)
- [Rekurzivna binarna pretraga](/primeri/rek_binarna_pretraga.cpp)
- [Najveci ponovljeni element](https://petlja.org/biblioteka/r/Zbirka2/najveci_duplikat1) [resenje](/resenja_zadataka/najveci_ponovljeni_element.cpp)
- [3Zbir](https://petlja.org/biblioteka/r/Zbirka2/three_sum) [resenje](/resenja_zadataka/three_sum.cpp)
- [Republicko 2022, Dokaz](/resenja_zadataka/22_dokaz.cpp)

### 26. Mart (online) - mape i rekurzija
- [Mape u C++](/primeri/mape.cpp)
- [Funkcije i rekurzija](/primeri/funkcije.cpp)
- [Drzavno 2019. zadatak "Razlika visina"](/resenja_zadataka/razlika_visina.cpp)
- [Drzavno 2018. zadatak "Binarni nizovi"](/resenja_zadataka/binari_nizovi.cpp)

### 15. i 8. Mart - vektori, efikasno sortiranje, binarna pretraga
- [Slozenost algoritama](https://www.codeblog.rs/clanci.php?p=klase_slozenosti_algoritama) - procitate ovo ako ne znate sta je, ili ako stradate od TLE na takmicenjima, okej je napisano
- [Vektori i efikasno sortiranje](/materijali/primeri/vektori.cpp)
- [Binarna pretraga (Wiki)](https://sr.wikipedia.org/wiki/Бинарна_претрага) 
- [Binarna pretraga u C++ (ugradjene funkcije)](/materijali/primeri/lower_bound.cpp)

### 1. Mart - matrice, uvod u slozenost
- Novo gradivo:
    - [Deklaracija, unos, i ispis matrice](/materijali//primeri/matrice.cpp) - pogledajte i stranu 328 u zbirci
    - Slozenost: koliko velicina ulaza utice na brzinu koda
        - Primer: dat je broj `t`; `t` puta se unosi broj `n <= 50`, i potrebno je ispisati `n`-ti fibonacijev broj
        - Naivno resenje: `t` puta pokrecemo algoritam koji od pocetka trazi `n`-ti fibonacijev broj - [kod](/materijali/primeri/fibonaci_spor.cpp). Slozenost je **O(t*n)**, to znaci da se neke linije u kodu izvrse t*n puta (linije unutar druge for-petlje)
        - Dobro resenje: najpre izracunamo prvih 50 fibonacijevih brojeva i sacuvamo u nizu. Zatim `t` puta prosto ispisujemo clanove naseg niza. Slozenost je **O(t+n)**!
- Zadaci radjeni na casu (strane 329 - 331):
    - [Broj bombi u okolini](https://petlja.org/biblioteka/r/Zbirka/broj_bombi_u_okolini)
    - [Broj pravougaonika na slici](https://petlja.org/biblioteka/r/Zbirka/broj_pravougaonika_na_slici)

### 21. Feb - funkcija niski `erase` i leksikografski poredak
- Novo gradivo: 
    - [brisanje delova niski](/niske_pregled.md#funkcija-erase)
    - [poredjenje niski, leksikografski poredak](/niske_pregled.md#poredjenje-niski)
    - [ulaz do kraja fajla (to jest sve dok ima nesto na ulazu)](/primeri/unos_do_kraja_ulaza.cpp)
- Zadaci radjeni na casu: 
    - Izbacivanje podniske: date su niske A i B, i potrebno je ukloniti sva pojavljivanja B iz A. Na primer, za `A="dalekodalje"` i `B="da"` rezultat je `"lekolje"` ([resenje](/resenja_zadataka/izbacivanje_podniske.cpp)) 
    - [Leksikografski poredak](https://petlja.org/biblioteka/r/Zbirka/leksikografski_poredak) ([resenje](/resenja_zadataka/leks_poredak.cpp))
    - [Leksikografski poredak bez razlika izmedju velikih i malih slova](https://petlja.org/biblioteka/r/Zbirka/leksikografski_poredak_velikamala) - ovde je potrebno korisitit `tolower` ili `toupper`, pogledajte materijale za poredjenje! ([resenje](/resenja_zadataka/leks_poredak_2.cpp))
    - [Podela linije na reci](https://petlja.org/biblioteka/r/Zbirka/podela_linije_na_reci) ([resenje](/resenja_zadataka/podela_na_reci.cpp))

### 14. Feb - obnavljanje niski, funkcije `find` i `substr`
- [Niske: pregled gradiva](/niske_pregled.md)
- Zadaci i primeri sa casa:
    - Broj karakera `'a'` u niski ([resenje](/resenja_zadataka/broj_karaktera_a_niske.cpp))
    - Broj reci u liniji ([resenje](/resenja_zadataka/broj_reci_u_liniji.cpp))
    - [Broj pojavljivanja podniske](https://petlja.org/biblioteka/r/Zbirka/broj_pojavljivanja_podniske) ([resenje](/resenja_zadataka/sva_pojavljivanja_reci_u_niski.cpp))
- Zadaci za vezbu kod kuce:
    - [Da li je podniska u niski](https://petlja.org/biblioteka/r/Zbirka/da_li_je_podniska)
    - [Rec Frankenstajn](https://petlja.org/biblioteka/r/Zbirka/rec_frankenstajn) ([resenje](/resenja_zadataka/frankenstain.cpp))
- Napredno (za razmisliti)
    - Napraviti nisku B od niske A tako sto iz A obrisete svako pojavljivanje niske C (*npr: A="dakramadaledar", B="da" -> C="kramaler"*)