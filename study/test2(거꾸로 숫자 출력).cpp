#include<iostream>
using namespace std;

int main()
{
  int n,i,j;

  cout << "enter number:";
  cin >> n;
  cout << endl;
  cout << "  ";

  for(i=1; i<n+1; i++)
  {
    for(j=1; j<n+1; j++)
    {
      cout << n*n-n*i+j;
      cout.width(4);

    }
    cout << endl;
  }
  return 0;
}

/*
첫 번째 줄의 값들이 for문의 첫번쨰 변수값들과 어떻게 조합하여야 나올지 생각해보니 답이 나옴!
*/
