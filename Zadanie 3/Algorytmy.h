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
};