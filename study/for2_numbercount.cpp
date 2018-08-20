#include<iostream>
using namespace std;

int main()
{
  int i, n;

  cout << "Please enter number:";
  cin >> n;

  cout << endl;
  for(i=0; i<n; i++)
    cout << i;

  cout << endl << "print the numbers from 0 to " << n-1;
  return 0;
  
}
