#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include<cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    // 29.10.2025
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "Adresaci_tymczasowo.txt";
    int idOstatniegoAdresata;
    // 28.10.2025
    int idUsuwanegoAdresata; // Niepotrzebne?

    bool czyPlikJestPusty();
    //string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:
    //setters

    //getters
    int pobierzIdOstatniegoAdresata();

    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0; // Sugestia Artura
    };

    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    // 28.10.2025 ponizej
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    // 29.10.2025
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);
};

#endif // PLIKZADRESATAMI_H
