#include <iostream>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include "Algorytmy.h"

using namespace std;
algorytm algorytmm;

int main()
{

	cout << "Wylosowane liczby to: " << endl;
	algorytmm.losowanie();
	algorytmm.wyswietlenie();
	cout << endl;
	cout << "Jakie sortowanie:" << endl;
	cout << "1 - Sortowanie Babelkowe" << endl;
	cout << "2 - Sortowanie wstawieniowe " << endl << endl;
	int wybor;
	cout << "Podaj ktore: ";
	cin >> wybor;
	cout << endl;

	cout << "Posortowane: " << endl;
	if (wybor == 1)
	{
		algorytmm.babelkowe();
		algorytmm.wyswietlenie();
	}

	else if (wybor == 2)
	{
		algorytmm.wstawieniowe();
		algorytmm.wyswietlenie();
	}

	else
	{
		cout << "Nie" << endl;
	}
}