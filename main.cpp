#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAresowa("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAresowa.logowanieUzytkownika();
    ksiazkaAresowa.wyswietlAdresatow();
    ksiazkaAresowa.dodajAdresata();
    ksiazkaAresowa.wyswietlAdresatow();
    ksiazkaAresowa.dodajAdresata();
    ksiazkaAresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAresowa.wylogowanieUzytkownika();
    ksiazkaAresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAresowa.logowanieUzytkownika();
    ksiazkaAresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAresowa.wyswietlAdresatow();
    ksiazkaAresowa.dodajAdresata();
    ksiazkaAresowa.wyswietlAdresatow();
    ksiazkaAresowa.dodajAdresata();
    ksiazkaAresowa.wyswietlAdresatow();
    ksiazkaAresowa.wylogowanieUzytkownika();
    return 0;
}
