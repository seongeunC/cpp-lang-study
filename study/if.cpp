#include<iostream>

using namespace std;

int main()
{
  int i , n;

  cout << "\n Please enter number:";
  cin >> n;

  for(i=0; i<n; i++)
  {
    if((i%2) == 0)
      cout << "\ni=" << i << " is even number";
    else
      cout << "\ni=" << i << " is odd number ";
  }
  return 0;
}
