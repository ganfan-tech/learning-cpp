#include "node.h"
#include <iostream>
using namespace std;

Node::Node(int value)
    : val(value)
{
  cout << "Node::Node constructor run." << endl;
  // this->val = value;
}

Node::~Node()
{
  cout << "Node::~Node run." << endl;
}

int Node::get_val()
{
  return val;
}

void Node::set_val(int val)
{
  this->val = val;
}