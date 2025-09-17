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
    cout << "idZalogowanegoUzytkownika pobrane getterem z adresatMenedzer: " << adresatMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
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

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(0);
    adresatMenedzer.ustawIdZalogowanegoUzytkownika(0);

    cout << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
    cout << adresatMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
    string anything;
    cin >> anything;
}
