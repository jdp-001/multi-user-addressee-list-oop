#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm> // Do usuniecia?

using namespace std;

class MetodyPomocnicze
{
public:
    static string wczytajLinie();
    static string konwerjsaIntNaString(int liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int konwersjaStringNaInt(string liczba);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static char wczytajZnak();
    static int wczytajLiczbeCalkowita();
    // 25.10.2025
    static void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    // 28.10.2025
    static int podajIdWybranegoAdresata();
    // 29.10.2025
    static void usunPlik(string nazwaPlikuZRozszerzeniem);
    static void zmienNazwePliku(string staraNazwa, string nowaNazwa);

};

#endif // METODYPOMOCNICZE_H
