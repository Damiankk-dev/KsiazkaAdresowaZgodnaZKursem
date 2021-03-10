#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "Adresat.h"

using namespace std;

class PlikZAdresatami{

    const string nazwaPlikuZAdresatami;
public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI)
    {
    };
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void dopiszAdresataDoPliku(Adresat adresat);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty();

};
#endif // PLIKZADRESATAMI_H
