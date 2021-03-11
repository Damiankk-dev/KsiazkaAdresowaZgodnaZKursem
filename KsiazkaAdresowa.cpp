#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    adresatMenedzer.idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    adresatMenedzer.adresaci = adresatMenedzer.plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresatMenedzer.idZalogowanegoUzytkownika);
    adresatMenedzer.idOstatniegoAdresata = adresatMenedzer.plikZAdresatami.idOstatniegoAdresata;
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika(){
    adresatMenedzer.idZalogowanegoUzytkownika = uzytkownikMenedzer.wylogowanieUzytkownika();
//    adresatMenedzer.idOstatniegoAdresata = 0;
//    adresatMenedzer.plikZAdresatami.idOstatniegoAdresata = 0;
}
void KsiazkaAdresowa::dodajAdresata(){
    cout << adresatMenedzer.dodajAdresata() << endl;
}
void KsiazkaAdresowa::wyswietlAdresatow(){
    adresatMenedzer.wyswietlWszystkichAdresatow();
}


