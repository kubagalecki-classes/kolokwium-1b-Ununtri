#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>

#include "zad1.hpp"

using namespace std;

vector<Artysta> stworzZespol(int a, const string& s)
{
	if (s.size() != a) logic_error;
	vector<Artysta> v;
	for (int i = 0; i < a; i++) v.push_back(Artysta(s, i));
	return v;
}