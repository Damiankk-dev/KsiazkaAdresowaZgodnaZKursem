#include <iostream>

#include "UzytkowniKMenedzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenadzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
    : uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
    , NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa(){
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    ;}
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlAdresatow();
};
