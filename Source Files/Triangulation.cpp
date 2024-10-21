#include "Triangulation.h"

using namespace std;

Triangulation::Triangulation() : uniquePoints(uniquePoints)
{
}

Triangulation::~Triangulation()
{
}

void Triangulation::insertTriangles(Triangle& triangle)
{
	trianglesList.push_back(triangle);
}

