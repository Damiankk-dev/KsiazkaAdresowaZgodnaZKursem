#include "Adresat.h"


void Adresat::ustawId(int noweId){
    if (noweId >= 0) id = noweId;
}
void Adresat::ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika){
    idZalogowanegoUzytkownika = noweIdZalogowanegoUzytkownika;
}
void Adresat::ustawImie(string noweImie){
    imie = noweImie;
}
void Adresat::ustawNazwisko(string noweNazwisko){
    nazwisko =noweNazwisko;
}
void Adresat::ustawNumerTelefonu(string nowyNrTelefonu){
    numerTelefonu = nowyNrTelefonu;
}
void Adresat::ustawEmail(string nowyEmail){
    email = nowyEmail;
}
void Adresat::ustawAdres(string nowyAdres){
    adres = nowyAdres;
}

int Adresat::pobierzId(){
    return id;
}
int Adresat::pobierzIdZalogowanegoUzytkownika(){
    return idZalogowanegoUzytkownika;
}
string Adresat::pobierzImie(){
    return imie;
}
string Adresat::pobierzNazwisko(){
    return nazwisko;
}
string Adresat::pobierzNumerTelefonu(){
    return numerTelefonu;
}
string Adresat::pobierzEmail(){
    return email;
}
string Adresat::pobierzAdres(){
    return adres;
}
