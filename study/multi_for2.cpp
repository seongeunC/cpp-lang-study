#include<iostream>
using namespace std;

int main()
{
  int i,j,k,n;

  cout << "\n Please enter number :";
  cin >> n;

  k = 1;
  for(i=0; i <n; i++)
  {
    for(j=0; j<n; j++)
    {
      cout << k++;
      cout.width(4);
    }
    cout << endl;
  }
  return 0;

}
