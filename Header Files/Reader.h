#pragma once
#include "Triangulation.h"
#define TOLERANCE 0.000001
class Reader
{
public:
	Reader() 
	{
	}
	~Reader() 
	{
	}
	virtual void read(const std::string& inputFile, Triangulation& triangulation) = 0;

	bool equalChecker(double num1, double num2);
};

