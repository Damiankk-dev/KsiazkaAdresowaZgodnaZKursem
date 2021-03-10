#include "PlikZAdresatami.h"

void PlikZAdresatami::dopiszAdresataDoPliku(Adresat adresat){
    MetodyPomocnicze metodyPomocnicze;
    string liniaZDanymiAdresata = "";
    fstream plikTekstowy;
    plikTekstowy.open(nazwaPlikuZAdresatami.c_str(), ios::out | ios::app);

    if (plikTekstowy.good() == true)
    {
        liniaZDanymiAdresata = zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(adresat);

        if (czyPlikJestPusty() == true)
        {
            plikTekstowy << liniaZDanymiAdresata;
        }
        else
        {
            plikTekstowy << endl << liniaZDanymiAdresata ;
        }
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku i zapisac w nim danych." << endl;
    }
    plikTekstowy.close();
    system("pause");
}
//int PlikZAdresatami::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
//{
//    Adresat adresat;
//    int idOstatniegoAdresata = 0;
//    string daneJednegoAdresataOddzielonePionowymiKreskami = "";
//    string daneOstaniegoAdresataWPliku = "";
//    fstream plikTekstowy;
//    plikTekstowy.open(nazwaPlikuZAdresatami.c_str(), ios::in);
//
//    if (plikTekstowy.good() == true)
//    {
//        while (getline(plikTekstowy, daneJednegoAdresataOddzielonePionowymiKreskami))
//        {
//            if(idZalogowanegoUzytkownika == pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(daneJednegoAdresataOddzielonePionowymiKreskami))
//            {
//                adresat = pobierzDaneAdresata(daneJednegoAdresataOddzielonePionowymiKreskami);
//                adresaci.push_back(adresat);
//            }
//        }
//        daneOstaniegoAdresataWPliku = daneJednegoAdresataOddzielonePionowymiKreskami;
//    }
//    else
//        cout << "Nie udalo sie otworzyc pliku i wczytac danych." << endl;
//
//    plikTekstowy.close();
//
//    if (daneOstaniegoAdresataWPliku != "")
//    {
//        idOstatniegoAdresata = pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(daneOstaniegoAdresataWPliku);
//        return idOstatniegoAdresata;
//    }
//    else
//        return 0;
//}
string PlikZAdresatami::zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat)
{
    MetodyPomocnicze metodyPomocnicze;
    string liniaZDanymiAdresata = "";

    liniaZDanymiAdresata += metodyPomocnicze.konwerjsaIntNaString(adresat.pobierzId()) + '|';
//    liniaZDanymiAdresata += konwerjsaIntNaString(adresat.idUzytkownika) + '|';
    liniaZDanymiAdresata += adresat.pobierzImie() + '|';
    liniaZDanymiAdresata += adresat.pobierzNazwisko() + '|';
    liniaZDanymiAdresata += adresat.pobierzNumerTelefonu() + '|';
    liniaZDanymiAdresata += adresat.pobierzEmail() + '|';
    liniaZDanymiAdresata += adresat.pobierzAdres() + '|';

    return liniaZDanymiAdresata;
}
bool PlikZAdresatami::czyPlikJestPusty(){
    fstream plikTekstowy;
    plikTekstowy.open(nazwaPlikuZAdresatami.c_str(), ios::app);
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;

    plikTekstowy.close();
}
