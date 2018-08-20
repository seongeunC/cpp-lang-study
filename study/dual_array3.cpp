#include<iostream>
using namespace std;

int main()
{
   int a[30][30]={0,};
   int i, j, k, n;

    cout << "\nPlease enter number:";
    cin >> n;

    k=0;
    for(i=0;i<n;i++)
    {
       a[i][i]=k++;   // [A]
    }

    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        cout << a[i][j];
        cout.width(4);
      }
      cout << endl;
    }

    return 0;
  }
