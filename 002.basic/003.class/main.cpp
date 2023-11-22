#include "node.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  /// 构造函数 和 析构函数
  Node n1(4);
  // Node n1 = 4; // 构造函数隐式初始化
  // n1.set_val(3);
  int val = n1.get_val();
  cout << "n1.val: "<< val << endl;

  Node n2;
  Node *pn2 = &n2;
  pn2->set_val(5);
  val = pn2->get_val();
  cout << val << endl;

  // delete pn2; error

  // new 和 delete

  Node *pn3 = new Node();
  delete pn3;

  // 构造数组，包含多个实例
  // 此时只能调用 默认无参的构造函数
  Node *pn4 = new Node[3];
  // 释放实例数组
  delete[] pn4;

  // 自动执行拷贝构造函数
  Node n5 = n1;
  cout << "n5.val: " << n5.get_val() << endl;

  return 0;
}
