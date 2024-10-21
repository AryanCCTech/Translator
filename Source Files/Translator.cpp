// Triangulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangulation.h"
#include "STLReader.h"
#include "STLWriter.h"
using namespace std;
int main()
{
    Triangulation TRI;
    STLReader reader1;
    STLWriter writer1;
    string inputFile1;
    string outputFile1;
    cout << "Enter the input file name: ";
    cin >> inputFile1;
    cout << endl;
    reader1.read(inputFile1,TRI);
    cout << "Enter the output file name: ";
    cin >> outputFile1;
    cout << endl;
    writer1.write(outputFile1,TRI);
}
