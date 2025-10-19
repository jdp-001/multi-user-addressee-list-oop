#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wypiszWszystkichAdresatow();

    ksiazkaAdresowa.wylogowanieUzytkownika();

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichAdresatow();

    return 0;
}





// -------------------------------------------------------------------------------------------------
// TESTY
// -------------------------------------------------------------------------------------------------

// Testy AdresatMenedzer
#include "AdresatMenedzer.h"

int testyAdresata_main()
{
    AdresatMenedzer adresatMenedzer("Adresaci.txt", 1);
    adresatMenedzer.wypiszWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wypiszWszystkichAdresatow();
}

// Testy PlikZAdresatami
#include "Adresat.h"
#include "PlikZAdresatami.h"

int testyPlikZAdresatami_main()
{
    PlikZAdresatami plikZAdresatami("Adresaci-test.txt");
    Adresat adresat(1, 2, "Janek", "Twardowski", "999 888 333", "janek.02.pl", "ul. Jankowa 3a");
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
    cout << plikZAdresatami.pobierzIdOstatniegoAdresata();
}
