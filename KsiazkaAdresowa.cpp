#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    int wehikulId;
    uzytkownikMenedzer.logowanieUzytkownika();
    wehikulId = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
    adresatMenedzer.ustawIdZalogowanegoUzytkownika(wehikulId);
    cout << "idZalogowanegoUzytkownika pobrane getterem z adresatMenedzer: " << adresatMenedzer.pobiezIdZalogowanegoUzytkownika() << endl;
    adresatMenedzer.pobierzAdresatowZalogowanegoUzytkownikaZPliku();
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
    adresatMenedzer.wypiszWszystkichAdresatow();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
