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
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
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

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

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

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoImieniu();
    }
    else
    {
        cout << "Aby wyszukiwac adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoNazwisku();
    }
    else
    {
        cout << "Aby wyszukiwac adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::usunAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->usunAdresata();
    }
    else
    {
        cout << "Aby usuwac adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::edytujAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->edytujAdresata();
    }
    else
    {
        cout << "Aby edytowac adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}
