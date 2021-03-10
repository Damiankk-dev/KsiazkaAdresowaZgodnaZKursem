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

    int idOstatniegoAdresata;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
public:
    int idZalogowanegoUzytkownika;
    AdresatMenadzer(string nazwaPlikuZAdresatami)
    : plikZAdresatami(nazwaPlikuZAdresatami)
    {
        idZalogowanegoUzytkownika = 0;
        idOstatniegoAdresata = 0;
    };
    int dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat &adresat);
    void wyswietlWszystkichAdresatow();


//string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
//Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
//string pobierzLiczbe(string tekst, int pozycjaZnaku);
//int konwersjaStringNaInt(string liczba);
//int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
//int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
//int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
};
