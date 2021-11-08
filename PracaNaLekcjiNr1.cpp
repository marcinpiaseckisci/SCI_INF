#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void cezar(string& a, int b)
{
    if (b > 26)b = b % 26;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')continue;
        a[i] += b;
        if (a[i] > 'z') a[i] -= 26;

    }


}

string podstawieniowy(string a)
{
    string tekst = "";
    for (int i = 0; i < a.size() - 1; i += 2)
        tekst = tekst + a[i + 1] + a[i];
    if (a.size() % 2 != 0)
        tekst = tekst + a[a.size() - 1];
    return tekst;
}

void deszyfrowanie(string& a, int b)
{
    if (b > 26)b = b % 26;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')continue;
        a[i] -= b;
        if (a[i] > 'z') a[i] += 26;

    }


}


int main()
{
    int opcja;
    int ilosc;
    string tekst;

    cout << "Podaj tekst: " << endl;
    getline(cin, tekst);

    cout << "1. Szyfrowanie Cezara" << endl;
    cout << "2. Szyfrowanie przestawieniowe" << endl;
    cout << "3. Szyfrowanie oba" << endl;
    cout << "4. Deszyfrowanie Cezar" << endl;
    cout << "5. Wyjscie" << endl;
    cin >> opcja;

    if (opcja == 1) {
        cout << "Ilosc znakow do przestawienia: " << endl;
        cin >> ilosc;

        cezar(tekst, ilosc);

        cout << tekst << endl;
    }
    if (opcja == 2) {
        cout << podstawieniowy(tekst) << endl;
    }
    if (opcja == 3) {
        cout << "Podaj klucz szyfrowania: " << endl;
        cin >> ilosc;
        cezar(tekst, ilosc);
        cout << podstawieniowy(tekst) << endl;
    }
    if (opcja == 4) {
        cout << "Ilosc znakow do przestawienia: " << endl;
        cin >> ilosc;

        deszyfrowanie(tekst, ilosc);

        cout << tekst << endl;
    }
    else {
        exit;
    }
}
