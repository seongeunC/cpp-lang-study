#include<iostream>
using namespace std;

int main()
{
  int i,j,n;

  cout << "\n Please enter number:";
  cin >> n;

  for(i=0; i<n; i++)
  {
    for(j=0; j<n-i; j++)
    {
      cout << j+1;
      cout.width(4);
    }
    cout << endl;
  }
  return 0;
}
