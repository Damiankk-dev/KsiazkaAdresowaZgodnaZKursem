#include <iostream>

#include "UzytkowniKMenedzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa{
//    const string nazwaPlikuZAdresatami;
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenadzer adresatMenedzer;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI)
    : uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
    , adresatMenedzer(NAZWAPLIKUZADRESATAMI)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlAdresatow();
};
