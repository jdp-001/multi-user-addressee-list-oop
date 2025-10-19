#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();
char wybierzOpcjeZMenuUzytkownika();

int main()
{
    char wybor;

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            cout << "Uzytkownik jest zalogowany" << endl; // Do usuniecia
            wybor = wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                //rejestracjaUzytkownika(uzytkownicy);
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                //idZalogowanegoUzytkownika = logowanieUzytkownika(uzytkownicy);
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }

        }
        else
        {
            cout << "Uzytkownik nie jest zalogowany" << endl; // Do usuniecia
            wybor = wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                //idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                //wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                //wyswietlWszystkichAdresatow(adresaci);
                ksiazkaAdresowa.wypiszWszystkichAdresatow();
                break;
            case '5':
                //idUsunietegoAdresata = usunAdresata(adresaci);
                //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                //edytujAdresata(adresaci);
                break;
            case '7':
                //zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                //idZalogowanegoUzytkownika = 0;
                //adresaci.clear();
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }
    return 0;
}




    // Dostêpne metody klasy KsiazkaAdresowa
    // -------------------------------------
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.wylogowanieUzytkownika();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichAdresatow();





char wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
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
