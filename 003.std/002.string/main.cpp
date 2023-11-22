#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
  string s1;
  string s2(s1);
  string s3 = s1;
  string s4 = "hello";

  //
  cout << "please enter s1:";
  cin >> s1;
  cout << endl;
  cout << "please enter s2:" << endl;
  // cin >> s2;
  getline(cin, s2);
  cout << "s1: " << s1 << endl
       << "s2: " << s2 << endl
       << "s3: " << s3 << endl
       << "s4: " << s4 << endl;

  // getline(cin, s2);
  return 0;
}
