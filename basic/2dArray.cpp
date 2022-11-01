#include <iostream>
using namespace std;
int main()
{
  int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; i < 4; i++)
    {
      cout << A[i][j]<<endl;
    }
    cout<<endl;
  }

  // poiner as array
  int *B[3];
  B[0] = new int[4];
  B[1] = new int[4];
  B[2] = new int[4];

 for (int i = 0; i < 3; i++)
  {
    for (int j = 0; i < 4; i++)
    {
      cout << B[i][j] << endl;
    }
  }
  // double pointer
  
  int **C;
  int = new int*[3]
  C[0] = new int [4];
  C[1] = new int [4];
  C[2] = new int [4];

   for (int i = 0; i < 3; i++)
  {
    for (int j = 0; i < 4; i++)
    {
      cout << C[i][j] << endl;
    }
  }
  return 0;
}