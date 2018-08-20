#include<iostream>
#include<fstream>

using namespace std;

int oneline(int n)
{
  int i;

  for(i=0; i<n; i++)
  {
    cout << i+1;
    cout.width(4);
  }
  return 0;
}

int main()
{
  int i, n ;

  cout << " \n Please enter number:";

  cin >> n;

  for(i=0; i<n; i++)
  {
    oneline(i+1);
    cout << endl;
  }
  return 0;
}
