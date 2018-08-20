#include<iostream>
using namespace std;

int main()
{
  int i,j,n;

  cout << "enter number:";
  cin >> n;
  cout << endl;
  cout << " ";
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      cout << j+1;
      cout.width(2);
    }
    cout << endl;
  }
  return 0;
}
