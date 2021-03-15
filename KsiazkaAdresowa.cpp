#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();
    adresatMenedzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() );
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}
void KsiazkaAdresowa::dodajAdresata(){
    adresatMenedzer->dodajAdresata() ;
}
void KsiazkaAdresowa::wyswietlAdresatow(){
    adresatMenedzer->wyswietlWszystkichAdresatow();
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany(){
    return uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}
void KsiazkaAdresowa::wyswietlMenuGlowne(){
    MenuTekstowe menuTekstowe;
    wybor = menuTekstowe.wybierzOpcjeZMenuGlownego();
}
void KsiazkaAdresowa::wyswietlPodmenuUzytkownika(){
    MenuTekstowe menuTekstowe;
    wybor = menuTekstowe.wybierzOpcjeZMenuUzytkownika();
}

