#include <iostream>

#include "UzytkowniKMenedzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa{
//    const string nazwaPliku;
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenadzer adresatMenedzer;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami){
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
};
