#include "vertex.h"

Vertex::Vertex(double cr) : commissionRate(cr) {}

Vertex::~Vertex() {}

double Vertex::getCommissionRate() { return commissionRate; }