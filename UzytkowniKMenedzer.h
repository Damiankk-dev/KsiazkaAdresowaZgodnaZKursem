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
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
    void wczytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
};
