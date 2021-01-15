#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <ostream>
#include <sstream>

using namespace std;

class Artysta
{
public:
	Artysta():pseudo("Anonim"),liczba(0){}
	Artysta(const string& p,unsigned l):pseudo(p),liczba(l){}
	const string& getPseudonim() const { return pseudo; }
	unsigned getSluchacze() const { return liczba; }
	virtual void graj(ostream& s) const { s << pseudo << ": " << liczba<<endl; }
private:
	string pseudo;
	unsigned liczba;
};

