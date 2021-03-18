#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    char wybor;
    KsiazkaAdresowa ksiazkaAresowa("Uzytkownicy.txt", "Adresaci.txt");
    while (true)
    {
        if ( !(ksiazkaAresowa.czyUzytkownikJestZalogowany() ) )
        {
            ksiazkaAresowa.wyswietlMenuGlowne();
            wybor = ksiazkaAresowa.wybor;

            switch (wybor)
            {
            case '1':
                ksiazkaAresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            ksiazkaAresowa.wyswietlPodmenuUzytkownika();
            wybor = ksiazkaAresowa.wybor;

            switch (wybor)
            {
            case '1':
                ksiazkaAresowa.dodajAdresata();
                break;
            case '2':
//                wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                ksiazkaAresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAresowa.wyswietlAdresatow();
                break;
            case '5':
                ksiazkaAresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAresowa.wylogowanieUzytkownika();
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
    }
    return 0;
}
