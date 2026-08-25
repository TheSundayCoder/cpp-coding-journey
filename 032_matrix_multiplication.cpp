#include <iostream>
using namespace std;

int main()
{
  int A[10][10], B[10][10], mult[10][10] = {0} /*all value 0*/, r1, r2, c1, c2;
  cout << "enter rows and columns of 1st martix " << endl;
  cin >> r1 >> c1;
  cout << "enter rows and columns of 2nd martix " << endl;
  cin >> r2 >> c2;
  if (c1 != r2)
  {
    cout << "multiplication not possible";
    exit(0);
  }
  cout << "ENTER ELEMENTS OF 1ST MATRIX" << endl;
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      cin >> A[i][j];
    }
  }
  cout << "ENTER ELEMENTS OF 2nd MATRIX" << endl;
  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cin >> B[i][j];
    }
  }
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      for (int k = 0; k < c1 /*or r2*/; k++)
      {
        mult[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cout << mult[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}