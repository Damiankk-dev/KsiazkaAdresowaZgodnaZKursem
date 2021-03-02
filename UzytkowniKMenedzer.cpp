#include "UzytkowniKMenedzer.h"

Uzytkownik UzytkownikMenedzer::podajDaneNowegoUzytkownika(){
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());
    MetodyPomocnicze metodyPomocnicze;


    do
    {
        cout << "Podaj login: ";
        uzytkownik.ustawLogin(metodyPomocnicze.wczytajLinie());
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    uzytkownik.ustawHaslo(metodyPomocnicze.wczytajLinie());

    return uzytkownik;
}
bool UzytkownikMenedzer::czyIstniejeLogin(string login){
    for (int i = 0; i < uzytkownicy.size(); i++){
        if (uzytkownicy[i].pobierzLogin() == login)
            return true;
    }
    return false;
}
int UzytkownikMenedzer::pobierzIdNowegoUzytkownika(){
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}
void UzytkownikMenedzer::rejestracjaUzytkownika(){
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}void UzytkownikMenedzer::wypiszWszystkichUzytkownikow(){
    for (int i = 0; i < uzytkownicy.size(); i++){
        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;
    }

}
void UzytkownikMenedzer::wczytajUzytkownikowZPliku(){
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}
