#include "AdresatMenadzer.h"

int AdresatMenadzer::dodajAdresata(){
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return idOstatniegoAdresata;
}
Adresat AdresatMenadzer::podajDaneNowegoAdresata()
{
    Adresat adresat;
    MetodyPomocnicze metodyPomocznicze;

    adresat.ustawId(++idOstatniegoAdresata);

    cout << "Podaj imie: ";
    adresat.ustawImie(metodyPomocznicze.wczytajLinie());
    adresat.ustawImie(metodyPomocznicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie() ) );

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(metodyPomocznicze.wczytajLinie() );
    adresat.ustawNazwisko(metodyPomocznicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko() ) );

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(metodyPomocznicze.wczytajLinie() );

    cout << "Podaj email: ";
    adresat.ustawEmail(metodyPomocznicze.wczytajLinie() );

    cout << "Podaj adres: ";
    adresat.ustawAdres(metodyPomocznicze.wczytajLinie() );

    return adresat;
}
void AdresatMenadzer::wyswietlDaneAdresata(Adresat &adresat){
    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}
void AdresatMenadzer::wyswietlWszystkichAdresatow(){
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

