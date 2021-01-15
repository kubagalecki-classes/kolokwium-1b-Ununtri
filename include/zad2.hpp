#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

#include "zad1.hpp"

using namespace std;

class PopGwiazda : public Artysta
{
public:
	PopGwiazda(const string& s,unsigned l):pseudonim(s),liczba(l){}
	virtual void graj(ostream& s)const { s << "PopGwiazda:" << pseudonim<<endl; }
private:
	string pseudonim;
	unsigned liczba;

};

class RapGwiazda : public Artysta
{
public:
	RapGwiazda(const string& s, unsigned l) :pseudonim(s), liczba(l) {}
	virtual void graj(ostream& s)const { s << "RapGwiazda:" << pseudonim<<endl; }
private:
	string pseudonim;
	unsigned liczba;

};

Artysta* stworzArtyste(const string& s)
{
	if (s.front() == toupper(s.front())) return new PopGwiazda("BTS", 1234);
	else return new RapGwiazda("Ye", 4321);
}