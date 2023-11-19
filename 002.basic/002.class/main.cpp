#include "node.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  // Node node1(4);
  Node node1 = 4; // 构造函数隐式初始化
  // node1.set_val(3);
  int val = node1.get_val();
  cout << val << endl;

  Node node2;
  Node *pn2 = &node2;
  pn2->set_val(5);
  val = pn2->get_val();
  cout << val << endl;
  return 0;
}
