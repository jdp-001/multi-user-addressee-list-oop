#include <iostream>
#include "Uzytkownik.h"
#include <vector>

using namespace std;

class KsiazkaAdresowa
{
    vector <Uzytkownik> uzytkownicy;

    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

public:
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
};
