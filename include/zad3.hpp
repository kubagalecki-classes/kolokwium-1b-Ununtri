#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "zad1.hpp"

using namespace std;

template<typename T>
class ArtystaPlusInstrument
{
public:
	ArtystaPlusInstrument(const Artysta& A,const T& I):a(A),i(I){}
	unsigned koncert() { return i.liczbaUczestnikow(a); }
private:
	Artysta a;
	T i;
};