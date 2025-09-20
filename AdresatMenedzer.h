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
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};

    // Getters
    int pobierzIdZalogowanegoUzytkownika(); // Na razie tylko na potrzeby testowania
    // Setters
    void ustawIdZalogowanegoUzytkownika(int idPrzekazywane);

    void pobierzAdresatowZalogowanegoUzytkownikaZPliku(); // TO DO

    //int dodajAdresata(); // TO DO
    void dodajAdresata(); // TO DO
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wypiszWszystkichAdresatow();
    int usunAdresata();
    void edytujAdresata();

};

#endif // ADRESATMENEDZER_H
