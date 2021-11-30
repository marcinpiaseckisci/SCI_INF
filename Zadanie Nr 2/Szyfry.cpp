#include "szyfry.h"
#include <iostream>
#include <string>

int ilosc;

string szyfr::szyfrowaniecezara(string tekst)
{
	string zaszyfrowane;
	cout << "Podaj o ile program ma zaszyfrowac (Numery 1-26) ";
	cin >> ilosc;

	for (int i = 0; i < tekst.size(); i++)
	{
		if (tekst[i] > 96)
		{
			char a;
			a = tekst[i] + ilosc;
			if (a > 124)
			{
				a = (a % 123) + 97;

			}
			zaszyfrowane = zaszyfrowane + a;
		}
		else
		{
			zaszyfrowane = zaszyfrowane + tekst[i];
		}
	}
	return zaszyfrowane;
}

string szyfr::szyfrowanieprzestawieniem(string a)
{
	{
		string tekst = "";
		for (int i = 0; i < a.size() - 1; i += 2)
			tekst = tekst + a[i + 1] + a[i];
		if (a.size() % 2 != 0)
			tekst = tekst + a[a.size() - 1];
		return tekst;
	}
}

string zaszyfrowany;

string szyfr::oba(string a)
{
	string dane;

	zaszyfrowany = szyfrowaniecezara(szyfrowanieprzestawieniem(a));
	return zaszyfrowany;
}


string szyfr::deszyfrowaniecezara(string tekst)
{
	string zdeszyfrowane;
	int ilosc;

	cout << "Podaj o ile program ma zdeszyfrowac (Numery 1-26)" << endl;
	cin >> ilosc;

	for (int i = 0; i < tekst.size(); i++)
	{
		if (tekst[i] >= 96)
		{
			char a;
			a = tekst[i] - ilosc;

			if (a <= 96)
			{
				char b = (tekst[i] % 97) + 123;
				b -= ilosc;
				a = b;
			}
			zdeszyfrowane += a;
		}

		else
		{
			zdeszyfrowane += tekst[i];
		}
	}

	return zdeszyfrowane;
}

int modulo(int a, int b)
{
	for (int i = 1; i < b; i++)
		if (((a % b) * (i % b)) % b == 1)
			return i;
}

string szyfr::RSA(string tekst)
{
	int a;
	int b;
	cout << "podaj liczbe pierwsza" << endl;
	cin >> a;
	cout << "podaj liczbe pierwsza" << endl;
	cin >> b;

	int f = a * b;
	int euler = (a - 1) * (b - 1);

	cout << "podaj liczbe od 1 do " << euler << endl;
	cout << "liczba ta i " << euler << " ma byc wzglednie pierwsza" << endl;
	int e;
	cin >> e;
	int d = modulo(e, euler);

	pair<int, int> publiczny;
	publiczny.first = f;
	publiczny.second = e;
	cout << "klucz publiczny: " << publiczny.first << " " << publiczny.second << endl;

	pair<int, int> prywatny;
	prywatny.first = f;
	prywatny.second = d;
	cout << "klucz prywatny: " << prywatny.first << " " << prywatny.second << endl;
	return " ";
}