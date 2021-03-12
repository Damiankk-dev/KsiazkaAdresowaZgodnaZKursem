#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    adresatMenedzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() );
//    adresatMenedzer->idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
//    adresatMenedzer->adresaci = adresatMenedzer->plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresatMenedzer->idZalogowanegoUzytkownika);
//    adresatMenedzer->idOstatniegoAdresata = adresatMenedzer->plikZAdresatami.idOstatniegoAdresata;
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika(){
//    adresatMenedzer->idZalogowanegoUzytkownika = uzytkownikMenedzer.wylogowanieUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata(){
    cout << adresatMenedzer->dodajAdresata() << endl;
}
void KsiazkaAdresowa::wyswietlAdresatow(){
    adresatMenedzer->wyswietlWszystkichAdresatow();
}


