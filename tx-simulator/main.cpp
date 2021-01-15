#include <cstdio>

#include "edge.h"
#include "vertex.h"

int main() {
  Vertex v = Vertex(0.1);
  Edge e = Edge(10.0);
  std::printf("%f\t%f\n", v.getCommissionRate(), e.getBalance());
  return 0;
}