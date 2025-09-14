#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
//#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Adresat> adresaci;
//    PlikZAdresatami plikZAdresatami;

    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();

public:
//    AdresatMenedzer(string nazwaPlikuAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};

    // Getters
    // Setters
    void ustawIdZalogowanegoUzytkownika(int idPrzekazywane);

    void pobierzAdresatowZalogowanegoUzytkownikaZPliku();

    int dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    void edytujAdresata();

};

#endif // ADRESATMENEDZER_H
