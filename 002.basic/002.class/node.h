#ifndef _NODE_H_
#define _NODE_H_

class Node
{

public:
  Node(){};
  explicit Node(int value);
  ~Node();
  int get_val();
  void set_val(int);

private:
  int val;
};

#endif