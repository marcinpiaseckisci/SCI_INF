#pragma once
#include <iostream>
#include <string>
#include <utility>

using namespace std;

class szyfr
{
public:
	string szyfrowaniecezara(string tekst);
	string szyfrowanieprzestawieniem(string a);
	string oba(string a);
	string deszyfrowaniecezara(string tekst);
	string RSA(string tekst);
};