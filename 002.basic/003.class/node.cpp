#include "node.h"
#include <iostream>
using namespace std;

Node::Node()
{
  cout << "Node::Node() run." << endl;
  // this->val = value;
}

Node::Node(int value)
    : val(value)
{
  cout << "Node::Node(int value) run." << endl;
  // this->val = value;
}

Node::Node(Node &node)
{
  cout << "Node::Node(Node &node) run." << endl;
  // this.val = node.get_val(); // error: member reference type 'Node *' is a pointer; did you mean to use '->'?
  this->val = node.get_val();
}

Node::~Node()
{
  cout << "Node::~Node run." << endl;
}

int Node::get_val() const
{
  return val;
}

void Node::set_val(int val)
{
  this->val = val;
}