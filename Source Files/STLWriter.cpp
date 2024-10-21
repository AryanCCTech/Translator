#include "STLWriter.h"
#include "Triangulation.h"
#include <fstream>

using namespace std;

STLWriter::STLWriter()
{
}

STLWriter::~STLWriter()
{
}

void STLWriter::write(const string& ourputFile,Triangulation& triangulation) {
	ofstream outfile(outputFile);

	for (auto i : triangulation.trianglesList) {
		outfile << triangulation.uniquePoints[i.getP1Point().getXCoord()] << " " << triangulation.uniquePoints[i.getP1Point().getYCoord()] << " " << triangulation.uniquePoints[i.getP1Point().getZCoord()] << endl;
		outfile << triangulation.uniquePoints[i.getP2Point().getXCoord()] << " " << triangulation.uniquePoints[i.getP2Point().getYCoord()] << " " << triangulation.uniquePoints[i.getP2Point().getZCoord()] << endl;
		outfile << triangulation.uniquePoints[i.getP3Point().getXCoord()] << " " << triangulation.uniquePoints[i.getP3Point().getYCoord()] << " " << triangulation.uniquePoints[i.getP3Point().getZCoord()] << endl;
		outfile << triangulation.uniquePoints[i.getP1Point().getXCoord()] << " " << triangulation.uniquePoints[i.getP1Point().getYCoord()] << " " << triangulation.uniquePoints[i.getP1Point().getZCoord()] << endl;
		outfile << endl;
		outfile << endl;
	}
	outfile.close();
}
