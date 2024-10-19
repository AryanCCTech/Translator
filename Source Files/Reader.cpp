#include "Reader.h"

void Reader::read(const std::string& inputFile, Triangulation& triangulation)
{
}

bool Reader::equalChecker(double num1, double num2)
{
	if (fabs(num1 - num2) > TOLERANCE)
		return false;
	return true;
}
