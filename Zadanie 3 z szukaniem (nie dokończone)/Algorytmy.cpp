#include <iostream>
#include "Algorytmy.h"
#include <time.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <iomanip>

using namespace std;
const int ilosc_liczb = 10000;

void algorytm::losowanie()
{
	srand(time(NULL));
	for (int i = 0; i < ilosc_liczb; i++)
	{
		wektor.push_back(rand() % 10000);
	}
}

void algorytm::wstawieniowe()
{
	int a, b;
	for (int i = 1; i < ilosc_liczb; i++)
	{
		a = wektor[i];
		b = i - 1;
		while (b >= 0 && wektor[b] > a)
		{
			wektor[b + 1] = wektor[b];
			b--;
		}
		wektor[b + 1] = a;
	}
}

void algorytm::quicksort(int lewy, int prawy)
{
	{
		int i = (lewy + prawy) / 2;
		int piwot = wektor[i];
		wektor[i] = wektor[prawy];
		int j = lewy;
		for (i = lewy; i < prawy; i++)
		{
			if (wektor[i] < piwot)
			{
				swap(wektor[i], wektor[j]);
				j = j + 1;
			}

		}
		wektor[prawy] = wektor[j];
		wektor[j] = piwot;
		if (lewy < j - 1)
		{
			quicksort(lewy, j - 1);
		}
		if (j + 1 < prawy)
		{
			quicksort(j + 1, prawy);
		}
	}
}

void algorytm::wybor()
{
	{
		int smol;
		for (int i = 0; i < wektor.size(); i++)
		{
			smol = i;
			for (int j = i + 1; j < wektor.size(); j++)
			{
				if (wektor[j] < wektor[smol])
				{
					smol = j;
				}
			}
			swap(wektor[i], wektor[smol]);
		}
	}
}

int algorytm::szukaj(int l, int p, long szukana)
	{
		int sz ;
		while (l <= p)
		{
			sz = (l + p) / 2;

			if (wektor[sz] == szukana)
				return sz;

			if (wektor[sz] > szukana)
				p = sz - 1;
			else
				l = sz + 1;
		}

		return -1;
	}

void algorytm::szukana(int left, int right)
{

}



void algorytm::babelkowe()
{
	for (int i = 0; i < ilosc_liczb - 1; i++) {
		for (int j = 0; j < ilosc_liczb - 1; j++) {
			if (wektor[j] > wektor[j + 1]) {
				swap(wektor[j], wektor[j + 1]);
			}
		}
	}
}


void algorytm::wyswietlenie()
{
	for (int i = 0; i < ilosc_liczb; i++)
	{
		cout << wektor[i] << " ";
	}
}
