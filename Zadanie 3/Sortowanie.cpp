#include <iostream>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <chrono>
#include "Algorytmy.h"

using namespace std;
algorytm algorytmm;

int main()
{

	cout << "Wylosowane liczby to: " << endl;
	algorytmm.losowanie();
	cout << endl;
	cout << "Jakie sortowanie:" << endl;
	cout << "1 - Sortowanie Babelkowe" << endl;
	cout << "2 - Sortowanie wstawieniowe " << endl << endl;
	cout << "3 - QuickSort " << endl;
	cout << "4 - Wybor " << endl;
	int wybor;
	cout << "Podaj ktore: ";
	cin >> wybor;
	cout << endl;

	cout << "Posortowane: " << endl;
	if (wybor == 1)
	{
		auto start = chrono::steady_clock::now();
		algorytmm.babelkowe();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "Czas Babelkowe: " << czas.count() << endl;
	}

	else if (wybor == 2)
	{
		auto start = chrono::steady_clock::now();
		algorytmm.wstawieniowe();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "Czas Wstawieniowe: " << czas.count() << endl;
	}
	else if (wybor == 3)
	{
		auto start = chrono::steady_clock::now();
		algorytmm.quicksort(0, algorytmm.wektor.size() - 1);
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "Czas QuickSort: " << czas.count() << endl;
	}
	else if (wybor == 4)
	{
		auto start = chrono::steady_clock::now();
		algorytmm.wybor();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "Czas Wybor: " << czas.count() << endl;
	}


	else
	{
		cout << "Nie" << endl;
	}
}