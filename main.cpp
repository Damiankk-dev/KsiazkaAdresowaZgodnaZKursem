#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAresowa("Uzytkownicy.txt");
    ksiazkaAresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAresowa.logowanieUzytkownika();
    ksiazkaAresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAresowa.logowanieUzytkownika();
    return 0;
}
