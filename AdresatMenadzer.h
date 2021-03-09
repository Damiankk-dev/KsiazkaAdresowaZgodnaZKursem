#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class AdresatMenadzer{

    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;
    vector<Adresat> adresaci;
public:
    int dodajAdresata();
    Adresat podajDaneNowegoAdresata();

//string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
//void wyswietlDaneAdresata(Adresat adresat);
//void dopiszAdresataDoPliku(Adresat adresat);
//Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
//string pobierzLiczbe(string tekst, int pozycjaZnaku);
//int konwersjaStringNaInt(string liczba);
//int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
//int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
//int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
//void wyswietlWszystkichAdresatow(vector <Adresat> &adresaci);

};
