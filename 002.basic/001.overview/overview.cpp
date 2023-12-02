#include "overview.h"
#include <stdio.h>
using namespace std;
#include <iostream>

// overview::val = 100;
int overview::getRandomValue()
{
  printf("get random int\n");
  char c[] = {'H'};
  char s[] = {"Hello World"};
  cout << sizeof(s) / sizeof(char) << endl;


  cout << sizeof(c) / sizeof(char) << endl;
  cout << c << endl;
  printf("%s", c);

  int a[3][4]; // 三行四列的数组， 三个元素，每个元素是一个包含四个元素的数组
  // cout << a[5][3] << endl;
  // a[0][1] = 3;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      a[i][j] = (i + 1) * (j + 1);
      // a[j][i] = (j + 1) * (i + 1);
    }
  }
  for (int i = 0; i < 3; i++)
  {
    cout << a[i];
    for (int j = 0; j < 4; j++)
    {
      cout << a[i][j] << "\t";
      // cout << a[j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}