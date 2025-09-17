#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    void zapiszWszystkichUzytkownikowDoPliku();

public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};

    // Getters
    int pobierzIdZalogowanegoUzytkownika();
    // Setters
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void wyzerujVectorUzytkownicy();

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    void logowanieUzytkownika(); // TEGO NIE MA U ARTURA
    void zmianaHaslaZalogowanegoUzytkownika();
};

#endif // UZYTKOWNIKMENEDZER_H
