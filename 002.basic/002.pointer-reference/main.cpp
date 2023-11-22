#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int i = 1;
  int &ri1 = i;

  cout << ri1 << endl;

  const int &ri2 = i;
  cout << ri2 << endl;

  // int &ri3 = 3; // error: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'

  const int &ri4 = 3;
  cout << ri4 << endl;
  return 0;
}
