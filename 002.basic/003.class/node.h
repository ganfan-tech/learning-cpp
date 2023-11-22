#ifndef _NODE_H_
#define _NODE_H_

class Node
{

public:
  Node();
  Node(int value);
  Node(Node &node);
  // explicit Node(int value);
  ~Node();
  int get_val() const;
  void set_val(int);

private:
  int val;
};

#endif