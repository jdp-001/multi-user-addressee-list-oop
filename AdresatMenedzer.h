#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    //int idZalogowanegoUzytkownika;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    }; // TO DO

    // Getters
    int pobierzIdZalogowanegoUzytkownika();

    // Setters
    void ustawIdZalogowanegoUzytkownika(int idPrzekazywane);

    void pobierzAdresatowZalogowanegoUzytkownikaZPliku();
    void dodajAdresata();
    void wypiszWszystkichAdresatow();
};

#endif // ADRESATMENEDZER_H
