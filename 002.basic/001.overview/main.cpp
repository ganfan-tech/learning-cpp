#include <iostream>
#include "overview.h"
using namespace std;

using overview::getRandomValue;

int main(int argc, char const *argv[])
{
  getRandomValue();
  cout << "Hello C++" << endl
       << "Hello world" << endl;
  cout << "enter your name:" << endl;
  string name;
  cin >> name;

  cout << "enter your age:" << endl;
  int age;
  cin >> age;

  cout << "Your name is " << name << ", and your age is " << age << "." << endl;
  return 0;
}
