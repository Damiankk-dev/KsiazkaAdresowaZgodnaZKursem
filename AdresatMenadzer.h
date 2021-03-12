#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZUzytkownikami.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

public:
    int idOstatniegoAdresata; //to ma byc tylko w pliku z adresatami, ale to nie stala, wiec nie teraz
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    AdresatMenadzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami)
    , ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        idOstatniegoAdresata = 0;
    };
    int dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat &adresat);
    void wyswietlWszystkichAdresatow();
};
