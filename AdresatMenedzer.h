#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream> // Do usuniecia?
#include <sstream>
#include <algorithm> // Do usuniecia?

#include "Adresat.h"
#include "MetodyPomocnicze.h" // Do usuniecia?
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    //int idOstatniegoAdresata; // Do usuniecia?
    //int idUsunietegoAdresata;

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    //int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();
    //string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst); // Do usuniecia?

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
        //idOstatniegoAdresata = plikZAdresatami.pobierzIdOstatniegoAdresata(); // <--- to jest kluczowe, ale tego nie widze u Artura do minuty 21:00 !!!!!
    };

    // Getters
    int pobierzIdZalogowanegoUzytkownika(); // tego nie ma u Artura!

    // Setters
    void ustawIdZalogowanegoUzytkownika(int idPrzekazywane); // tego nie ma u Artura!

    void pobierzAdresatowZalogowanegoUzytkownikaZPliku(); // tego nie mna u Artura!
    void dodajAdresata();
    void wypiszWszystkichAdresatow(); // U Artura inna nazwa - wyswietlWszystkichAdresatow()
};

#endif // ADRESATMENEDZER_H
