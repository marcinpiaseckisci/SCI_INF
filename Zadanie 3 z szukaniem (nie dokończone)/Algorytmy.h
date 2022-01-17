#pragma once
#include <iostream>
#include <vector>

using namespace std;

class algorytm
{
public:
	vector<int> wektor;
	void wyswietlenie();
	void losowanie();
	void babelkowe();
	void wstawieniowe();
	void quicksort(int left, int right);
	void wybor();
	int szukaj(int l, int p, long szukana);
	void szukana(int left, int right);
};