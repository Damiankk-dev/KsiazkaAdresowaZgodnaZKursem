#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <algorithm>


using namespace std;

class MetodyPomocnicze{
public:
    char wczytajZnak();
    string konwerjsaIntNaString(int liczba);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int konwersjaStringNaInt(string liczba);
    int wczytajLiczbeCalkowita();
    bool czyPlikJestPusty(string nazwaPliku);

};



#endif // METODYPOMOCNICZE_H
