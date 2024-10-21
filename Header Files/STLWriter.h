#pragma once

#include "Triangulation.h"
#include "Triangle.h"
#include "Writer.h"
#include <vector>

using namespace std;

class STLWriter : private Writer
{
    string outputFile = "output.dat";
public:
    STLWriter();
    ~STLWriter();
    void write(const string& ourpurFile,Triangulation& triangulation);
};
