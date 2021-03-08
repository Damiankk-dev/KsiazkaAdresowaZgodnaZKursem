#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAresowa("users.txt");
    ksiazkaAresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAresowa.rejestracjaUzytkownika();
    ksiazkaAresowa.rejestracjaUzytkownika();
    ksiazkaAresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
