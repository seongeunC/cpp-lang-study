#include<iostream>
using namespace std;

int main()
{
  int i,j,n;
  int t =0;
  cout << "enter number:";
  cin >> n;
  cout << endl;
  cout << "  ";

  for(i=0; i<n; i++)
  {
    for(j=0; j<i+1; j++)
    {
      cout << t+1;

      cout.width(4);
      t++;
      
    }
    cout << endl;
   }
   return 0;
 }

/*
00

10  11

20  21  22

30  31  32  33

40  41  42  43  44

*/
