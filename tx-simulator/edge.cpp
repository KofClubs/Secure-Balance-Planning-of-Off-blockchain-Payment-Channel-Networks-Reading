#include "edge.h"

Edge::Edge(double b) : balance(b) {}

Edge::~Edge() {}

double Edge::getBalance() { return balance; }