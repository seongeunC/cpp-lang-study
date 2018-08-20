#include<iostream>
using namespace std;

int main()
{
  int a[30][30];
  int i,j,k,n;

  cout << "\n Please enter number:";
  cin >> n;

  k = 0;

  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      a[i][j] = k++;

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


/*
이차원 배열

1. 이름(명)이 있다.
2. 자료형이 있다.
3. 컴퓨터 내의 메모리 상에 존재한다.(위치와 크기)
4. 값을 보관할 수 있다.
5. 보관했던 값을 꺼내어 사용할 수 있다.
