#include "AdresatMenedzer.h"

// Getters
int AdresatMenedzer::pobiezIdZalogowanegoUzytkownika()
{
    return idZalogowanegoUzytkownika;
}

// Setters
void AdresatMenedzer::ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika)
{
   idZalogowanegoUzytkownika = noweIdZalogowanegoUzytkownika;
}

void AdresatMenedzer::pobierzAdresatowZalogowanegoUzytkownikaZPliku()
{
    // TO DO
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);

}
