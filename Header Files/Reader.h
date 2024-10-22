#pragma once
#include "Triangulation.h"
#include <string>

#define TOLERANCE 0.000001

using namespace std;

class Reader
{
public:
	Reader();
	~Reader();
	virtual void read(string& inputFile, Triangulation& triangulation) = 0;

	struct ToleranceComparator 
	{
		bool operator()(double a, double b) const 
		{
			return (fabs(a - b) > TOLERANCE) ? a < b : false;
		}
	};

	bool equalChecker(double num1, double num2);
};

