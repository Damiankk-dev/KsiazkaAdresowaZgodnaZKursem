#ifndef PLIK_TEKSTOWY
#define PLIK_TEKSTOWY

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy{

    const string NAZWA_PLIKU;

public:

    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }
    bool czyPlikJestPusty();
    string pobierzNazwePliku();
};
#endif // PLIK_TEKSTOWY
