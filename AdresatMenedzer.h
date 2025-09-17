#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};

    // Getters
    int pobierzIdZalogowanegoUzytkownika(); // Na razie tylko na potrzeby testowania
    // Setters
    void ustawIdZalogowanegoUzytkownika(int idPrzekazywane);

    void pobierzAdresatowZalogowanegoUzytkownikaZPliku(); // TO DO

    int dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wypiszWszystkichAdresatow();
    int usunAdresata();
    void edytujAdresata();

};

#endif // ADRESATMENEDZER_H
