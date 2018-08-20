/*

1-3) number = 5
 1  3  5  7  9
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49
*/

#include<iostream>
using namespace std;

int main()
{
  int i,j,n;
  int t = 0;

  cout << "enter number:";
  cin >> n;
  cout << endl;
  cout << "  ";

  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      cout << t*2+1;
      cout.width(4);
      t++;
    }
    cout << endl;
  }
  return 0;
}
