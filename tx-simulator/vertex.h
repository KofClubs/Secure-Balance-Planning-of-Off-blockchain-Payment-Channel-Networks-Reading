#ifndef __VERTEX_H__
#define __VERTEX_H__

/**
 * 区块链支付网络节点
 * 本类提供了节点的转发费率（手续费）
 */
class Vertex {
public:
  Vertex(double);
  ~Vertex();

private:
  double commissionRate;

public:
  double getCommissionRate();
};

#endif