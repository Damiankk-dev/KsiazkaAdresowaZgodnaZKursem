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

    string pobierzNazwePliku();

    bool czyPlikJestPusty();
};
#endif // PLIK_TEKSTOWY
