#pragma once
#pragma once
#include <string>
#include "Triangulation.h"

using namespace std;

class Writer
{
public:
	Writer();
	~Writer();
	virtual void write(const string& inputFile, Triangulation& triangulation) = 0;
};
