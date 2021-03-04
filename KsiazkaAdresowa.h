#include <iostream>

#include "UzytkowniKMenedzer.h"

using namespace std;

class KsiazkaAdresowa{
//    const string nazwaPliku;
    UzytkownikMenedzer uzytkownikMenedzer;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami){};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
