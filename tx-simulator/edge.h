#ifndef __EDGE_H__
#define __EDGE_H__

/**
 * 区块链支付网络边
 * 本类提供了边的余额
 */
class Edge {
public:
  Edge(double);
  ~Edge();

private:
  double balance;

public:
  double getBalance();
};

#endif