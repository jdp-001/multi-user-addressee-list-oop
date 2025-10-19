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
    //int wehikulId;
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }

    //wehikulId = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
    //adresatMenedzer.ustawIdZalogowanegoUzytkownika(wehikulId);
    //adresatMenedzer.pobierzAdresatowZalogowanegoUzytkownikaZPliku(); // Tutaj mozemy pobrac idOstatniegoAdresata
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wypiszWszystkichAdresatow();
    }
    else
    {
        cout << "Aby wypisac wszystkich adresatow, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

// WPROWADZONA ZMIANA 16:56 !!!
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
    //uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(0);
    //adresatMenedzer->ustawIdZalogowanegoUzytkownika(0);
}

// WPROWADZONA ZMIANA 16:56
void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        return true;
    }
    else
    {
        return false;
    }
}
