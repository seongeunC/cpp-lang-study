#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  char filename[80];
  char ch;

  cout << "\nPlease enter file name:";
  cin >> filename;

  ifstream fin(filename);

  while(fin.get(ch))
  {
    cout << ch;
  }

  fin.close();
  return 0;
}

/*

파일이름을 입력하면 현재 directory에 있는 입력한 파일명의 파일을 출력!

ifstream개체의 인스턴스를 선언하고 파일 이름을 매개 변수로 넘겨준다!
ifstream fin(filename);

fin.get(ch); 한번에 한문자씩 읽어드린다.
