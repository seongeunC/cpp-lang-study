#include<iostream>
using namespace std;

int main()
{
  int a[30][30];
  int i,j,k,n;

  cout << "\n Please enter number:";
  cin >> n;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      a[i][j] = (i+1)*(j+1);
  }

  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      cout << a[i][j];
      cout.width(4);
    }
    cout << endl;
  }
  return 0;
}
