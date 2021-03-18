#include "PlikZAdresatami.h"

void PlikZAdresatami::dopiszAdresataDoPliku(Adresat adresat){
    string liniaZDanymiAdresata = "";
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::out | ios::app);

    if (plikTekstowy.good() == true)    {
        liniaZDanymiAdresata = zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(adresat);

        if (czyPlikJestPusty() == true)        {
            plikTekstowy << liniaZDanymiAdresata;
        } else {
            plikTekstowy << endl << liniaZDanymiAdresata ;
        }
        idOstatniegoAdresata++;
    } else {
        cout << "Nie udalo sie otworzyc pliku i zapisac w nim danych." << endl;
    }
    plikTekstowy.close();
    system("pause");
}
vector <Adresat> PlikZAdresatami::wczytajAdresatowZalogowanegoUzytkownikaZPliku(const int idZalogowanegoUzytkownika){
    Adresat adresat;
    vector<Adresat> adresaci;
    adresat.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    string daneJednegoAdresataOddzielonePionowymiKreskami = "";
    string daneOstaniegoAdresataWPliku = "";
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);

    if (plikTekstowy.good() == true)    {
        while (getline(plikTekstowy, daneJednegoAdresataOddzielonePionowymiKreskami))        {
            if(idZalogowanegoUzytkownika == pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(daneJednegoAdresataOddzielonePionowymiKreskami))            {
                adresat = pobierzDaneAdresata(daneJednegoAdresataOddzielonePionowymiKreskami);
                adresaci.push_back(adresat);
            }
        }
        daneOstaniegoAdresataWPliku = daneJednegoAdresataOddzielonePionowymiKreskami;
    } else cout << "Nie udalo sie otworzyc pliku i wczytac danych." << endl;

    plikTekstowy.close();

    if (daneOstaniegoAdresataWPliku != "")    {
        idOstatniegoAdresata = pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(daneOstaniegoAdresataWPliku);
    } else
        idOstatniegoAdresata =  0;

    return adresaci;
}
string PlikZAdresatami::zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat){
    MetodyPomocnicze metodyPomocnicze;
    string liniaZDanymiAdresata = "";

    liniaZDanymiAdresata += metodyPomocnicze.konwerjsaIntNaString(adresat.pobierzId() ) + '|';
    liniaZDanymiAdresata += metodyPomocnicze.konwerjsaIntNaString(adresat.pobierzIdZalogowanegoUzytkownika() ) + '|';
    liniaZDanymiAdresata += adresat.pobierzImie() + '|';
    liniaZDanymiAdresata += adresat.pobierzNazwisko() + '|';
    liniaZDanymiAdresata += adresat.pobierzNumerTelefonu() + '|';
    liniaZDanymiAdresata += adresat.pobierzEmail() + '|';
    liniaZDanymiAdresata += adresat.pobierzAdres() + '|';

    return liniaZDanymiAdresata;
}
int PlikZAdresatami::pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami){
    MetodyPomocnicze metodyPomocnicze;
    int pozycjaRozpoczeciaIdUzytkownika = daneJednegoAdresataOddzielonePionowymiKreskami.find_first_of('|') + 1;
    int idUzytkownika = metodyPomocnicze.konwersjaStringNaInt(metodyPomocnicze.pobierzLiczbe(daneJednegoAdresataOddzielonePionowymiKreskami, pozycjaRozpoczeciaIdUzytkownika));

    return idUzytkownika;
}
Adresat PlikZAdresatami::pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami){
    Adresat adresat;
    string pojedynczaDanaAdresata = "";
    int numerPojedynczejDanejAdresata = 1;

    for (int pozycjaZnaku = 0; pozycjaZnaku < daneAdresataOddzielonePionowymiKreskami.length(); pozycjaZnaku++)    {
        if (daneAdresataOddzielonePionowymiKreskami[pozycjaZnaku] != '|')        {
            pojedynczaDanaAdresata += daneAdresataOddzielonePionowymiKreskami[pozycjaZnaku];
        } else {
            switch(numerPojedynczejDanejAdresata) {
            case 1:
                adresat.ustawId(atoi(pojedynczaDanaAdresata.c_str() ) );
                break;
            case 2:
                adresat.ustawIdZalogowanegoUzytkownika( atoi(pojedynczaDanaAdresata.c_str() ) );
                break;
            case 3:
                adresat.ustawImie(pojedynczaDanaAdresata);
                break;
            case 4:
                adresat.ustawNazwisko(pojedynczaDanaAdresata);
                break;
            case 5:
                adresat.ustawNumerTelefonu(pojedynczaDanaAdresata);
                break;
            case 6:
                adresat.ustawEmail(pojedynczaDanaAdresata);
                break;
            case 7:
                adresat.ustawAdres(pojedynczaDanaAdresata);
                break;
            }
            pojedynczaDanaAdresata = "";
            numerPojedynczejDanejAdresata++;
        }
    }
    return adresat;
}
int PlikZAdresatami::pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami){
    MetodyPomocnicze metodyPomocnicze;
    int pozycjaRozpoczeciaIdAdresata = 0;
    int idAdresata = metodyPomocnicze.konwersjaStringNaInt(metodyPomocnicze.pobierzLiczbe(daneJednegoAdresataOddzielonePionowymiKreskami, pozycjaRozpoczeciaIdAdresata));
    return idAdresata;
}
int PlikZAdresatami::pobierzIdOstatniegoAdresata(){
    return idOstatniegoAdresata;
}
void PlikZAdresatami::usunLinieWPlikuZWybranymAdresatem(int idUsuwanegoAdresata){
    fstream odczytywanyPlikTekstowy, tymczasowyPlikTekstowy;
    string daneJednegoAdresataOddzielonePionowymiKreskami = "";
    string nazwaTymczasowegoPlikuZAdresatami = "temp_" + pobierzNazwePliku();
    PlikTekstowy TymczasowyPlikTekstowy(nazwaTymczasowegoPlikuZAdresatami);
    int numerWczytanejLinii = 1;

    odczytywanyPlikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);

    if (odczytywanyPlikTekstowy.good() == true && idUsuwanegoAdresata != 0)    {
        while(getline(odczytywanyPlikTekstowy, daneJednegoAdresataOddzielonePionowymiKreskami))        {
            if(idUsuwanegoAdresata != pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(daneJednegoAdresataOddzielonePionowymiKreskami)) {
                tymczasowyPlikTekstowy.open(nazwaTymczasowegoPlikuZAdresatami.c_str(), ios::out | ios::app);
                if (TymczasowyPlikTekstowy.czyPlikJestPusty()) tymczasowyPlikTekstowy << daneJednegoAdresataOddzielonePionowymiKreskami;
                else tymczasowyPlikTekstowy << endl << daneJednegoAdresataOddzielonePionowymiKreskami;
                tymczasowyPlikTekstowy.close();
            }
        }
        odczytywanyPlikTekstowy.close();
        usunPlik(pobierzNazwePliku());
        zmienNazwePliku(nazwaTymczasowegoPlikuZAdresatami, pobierzNazwePliku());
        idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsuwanegoAdresata);
    }
}
void PlikZAdresatami::usunPlik(string nazwaPlikuZRozszerzeniem){
    if (remove(nazwaPlikuZRozszerzeniem.c_str()) == 0){}
    else cout << "Nie udalo sie usunac pliku " << nazwaPlikuZRozszerzeniem << endl;
}
void PlikZAdresatami::zmienNazwePliku(string staraNazwa, string nowaNazwa){
    if (rename(staraNazwa.c_str(), nowaNazwa.c_str()) == 0){}
    else cout << "Nazwa pliku nie zostala zmieniona." << staraNazwa << endl;
}
int PlikZAdresatami::zaktualizujDaneWybranegoAdresata(Adresat adresat){
    bool czyIstniejeAdresat = false;
    int idSzukanegoAdresata = adresat.pobierzId();
    string daneJednegoAdresataOddzielonePionowymiKreskami = "";
    string nazwaTymczasowegoPlikuZAdresatami = "temp_" + pobierzNazwePliku();
    string liniaZDanymiAdresataOddzielonePionowymiKreskami = zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(adresat);
    fstream odczytywanyPlikTekstowy, tymczasowyPlikTekstowy;
    PlikTekstowy TymczasowyPlikTekstowy(nazwaTymczasowegoPlikuZAdresatami);
    odczytywanyPlikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);

    if (odczytywanyPlikTekstowy.good() == true && idSzukanegoAdresata != 0)    {
        while(getline(odczytywanyPlikTekstowy, daneJednegoAdresataOddzielonePionowymiKreskami))        {
            if(idSzukanegoAdresata == pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(daneJednegoAdresataOddzielonePionowymiKreskami))            {
                tymczasowyPlikTekstowy.open(nazwaTymczasowegoPlikuZAdresatami.c_str(), ios::out | ios::app);
                czyIstniejeAdresat = true;
                if (TymczasowyPlikTekstowy.czyPlikJestPusty()==true){
                    tymczasowyPlikTekstowy << liniaZDanymiAdresataOddzielonePionowymiKreskami;
                } else {
                    tymczasowyPlikTekstowy << endl << liniaZDanymiAdresataOddzielonePionowymiKreskami;
                }
                tymczasowyPlikTekstowy.close();
            }
            else {
                tymczasowyPlikTekstowy.open(nazwaTymczasowegoPlikuZAdresatami.c_str(), ios::out | ios::app);
                if (TymczasowyPlikTekstowy.czyPlikJestPusty()==true){
                    tymczasowyPlikTekstowy << daneJednegoAdresataOddzielonePionowymiKreskami;
                } else {
                    tymczasowyPlikTekstowy << endl << daneJednegoAdresataOddzielonePionowymiKreskami;
                }
                tymczasowyPlikTekstowy.close();
            }


        }
        if (czyIstniejeAdresat = false)        {
            odczytywanyPlikTekstowy.close();
            return 0;
        }
    }
    odczytywanyPlikTekstowy.close();
    tymczasowyPlikTekstowy.close();
    usunPlik(pobierzNazwePliku());
    zmienNazwePliku(nazwaTymczasowegoPlikuZAdresatami, pobierzNazwePliku());
    return 0;
}

int PlikZAdresatami::podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata){
    if (idUsuwanegoAdresata == idOstatniegoAdresata)
        return pobierzZPlikuIdOstatniegoAdresata();
    else
        return idOstatniegoAdresata;
}

int PlikZAdresatami::pobierzZPlikuIdOstatniegoAdresata(){
    int idOstatniegoAdresata = 0;
    string daneJednegoAdresataOddzielonePionowymiKreskami = "";
    string daneOstaniegoAdresataWPliku = "";
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);
    if (plikTekstowy.good() == true)    {
        while (getline(plikTekstowy, daneJednegoAdresataOddzielonePionowymiKreskami)) {}
            daneOstaniegoAdresataWPliku = daneJednegoAdresataOddzielonePionowymiKreskami;
            plikTekstowy.close();
    }  else cout << "Nie udalo sie otworzyc pliku i wczytac danych." << endl;

    if (daneOstaniegoAdresataWPliku != "")    {
        idOstatniegoAdresata = pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(daneOstaniegoAdresataWPliku);
    }
    return idOstatniegoAdresata;
}
