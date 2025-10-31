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

// 25.10.2025 ponizej
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoImieniu();
    } else
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
    } else
    {
        cout << "Aby wyszukiwac adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

// 28.10.2025 ponizej
void KsiazkaAdresowa::usunAdresata()
{
    // Test uruchomienia metody
    cout << "metoda KsiazkaAdresowa::usunAdresata() zostala uruchomiona" << endl;
    system("pause");

    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        // Test start
        cout << "Wywoluje linie: adresatMenedzer->usunAdresata();" << endl;
        system("pause");
        // Test end

        adresatMenedzer->usunAdresata();

        // Test start
        cout << "Wykonal linie: adresatMenedzer->usunAdresata();" << endl;
        system("pause");
        // Test end

    } else
    {
        cout << "Aby usuwac adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

int KsiazkaAdresowa::pobierzIdUsunietegoAdresata() {
    return adresatMenedzer->pobierzIdUsunietegoAdresata();
}
