#include "AdresatMenadzer.h"

int AdresatMenadzer::dodajAdresata(){
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
//    dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}
Adresat AdresatMenadzer::podajDaneNowegoAdresata()
{
    Adresat adresat;
    MetodyPomocnicze metodyPomocznicze;

    adresat.ustawId(++idOstatniegoAdresata);
//    adresat.idUzytkownika = idZalogowanegoUzytkownika;

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
