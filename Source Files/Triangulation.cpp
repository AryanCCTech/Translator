#include "Triangulation.h"

using namespace std;

Triangulation::Triangulation()
{
}

Triangulation::~Triangulation()
{
}

void Triangulation::insertTriangles(Triangle& triangle)
{
	trianglesList.push_back(triangle);
}

