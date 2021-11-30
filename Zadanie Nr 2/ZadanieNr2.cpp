#include <iostream>
#include <string>
#include "Szyfry.h"
using namespace std;

int main()
{
	string tekst;
	string szyfrowanie;
	string szyfrowaniedwa;
	szyfr ye;
	
	cout << "Wprowadz tekst" << endl;
	getline(cin, tekst);
	cout << "Wybierz opcje " << endl;
	cout << "1. Szyfr cezara" << endl;
	cout << "2. Szyfr przestawieniowy" << endl;
	cout << "3. Cezara i Przestawieniowy" << endl;
	cout << "4. Deszyfrowanie cezara" << endl;
	cout << "5. RSA" << endl;
	int opcja;
	cin >> opcja;

	if (opcja == 1)
	{
		szyfrowanie = ye.szyfrowaniecezara(tekst);
		cout << "zaszyfrowany tekst: " << szyfrowanie << endl;
	}
	else if (opcja == 2)
	{
		szyfrowanie = ye.szyfrowanieprzestawieniem(tekst);
		cout << "zaszyfrowany tekst: " << szyfrowanie << endl;
	}
	else if (opcja == 3)
	{
		szyfrowanie = ye.oba(tekst);
		cout << "zaszyfrowany tekst: " << szyfrowanie << endl;
	}
	else if (opcja == 4)
	{
		szyfrowanie = ye.deszyfrowaniecezara(tekst);
		cout << "deszyfrowany tekst: " << szyfrowanie << endl;
	}
	else if (opcja == 5)
	{
		szyfrowanie = ye.RSA(tekst);
	}
	else {
		exit;
	}
}