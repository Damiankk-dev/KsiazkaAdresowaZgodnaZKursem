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
    string konwerjsaIntNaString(int liczba);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
};



#endif // METODYPOMOCNICZE_H
