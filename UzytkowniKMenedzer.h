#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer{
    int idZalogowanegoUzytkownika;
    vector<Uzytkownik> uzytkownicy;

    PlikZUzytkownikami plikZUzytkownikami;

    Uzytkownik podajDaneNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    int pobierzIdNowegoUzytkownika();


public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    int logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
};
