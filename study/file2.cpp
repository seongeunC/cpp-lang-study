#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  char finname[80];
  char foutname[80];
  char ch;

  cout << "\n Please enter input file name:";
  cin >> finname;
  cout << "\n Please enter ouput file name:";
  cin >> foutname;

  ifstream fin(finname,ios::binary);
  ofstream fout(foutname,ios::binary);

  while(fin.get(ch))
  {
    cout << ch;
    fout.put(ch);
  }
  fin.close();
  fout.close();
  return 0;

}

/*
file 복사
*/
