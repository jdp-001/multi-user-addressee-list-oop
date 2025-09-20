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
    string anything;
    int wehikulId;
    uzytkownikMenedzer.logowanieUzytkownika();
    wehikulId = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
    adresatMenedzer.ustawIdZalogowanegoUzytkownika(wehikulId);
    //cout << "idZalogowanegoUzytkownika pobrane getterem z adresatMenedzer: " << adresatMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
    //cin >> anything;
    //cout << "Rozpoczynam pobierzAdresatowZalogowanegoUzytkownikaZPliku" << endl;
    //cin >> anything;
    adresatMenedzer.pobierzAdresatowZalogowanegoUzytkownikaZPliku(); // Tutaj mozemy pobrac idOstatniegoAdresata
    //cout << "Zakonczylem pobierzAdresatowZalogowanegoUzytkownikaZPliku" << endl;
    //cin >> anything;
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

    //cout << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
    //cout << adresatMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
    //string anything;
    //cin >> anything;
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();
}
