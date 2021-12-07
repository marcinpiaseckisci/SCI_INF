#include <iostream>
#include "Algorytmy.h"
#include <time.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>

using namespace std;

void algorytm::losowanie()
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		wektor.push_back(rand() % 1000);
	}
}

void algorytm::wstawieniowe()
{
	int a, b;
	for (int i = 1; i < 100; i++)
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

void algorytm::babelkowe()
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 1; j < 99; j++)
		{
			if (wektor[j] > wektor[j + 1])
			{
				swap(wektor[j], wektor[j + 1]);
			}
		}
	}
}


void algorytm::wyswietlenie()
{
	for (int i = 0; i < 100; i++)
	{
		cout << wektor[i] << " ";
	}
}