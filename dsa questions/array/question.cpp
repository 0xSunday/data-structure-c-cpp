// Maximum and Minimum Element in an Array
#include <iostream>
using namespace std;
int maximum(int A[], int n)
{
  int max;
  max = A[0];
  for (int i = 0; i < n; i++)
  {
    if (A[i] > max)
    {
      max = A[i];
    }
  }
  return max;
}
int minmum(int A[], int n)
{
  int min;
  min = A[0];
  for (int i = 0; i < n; i++)
  {
    if (A[i] < min)
    {
      min = A[i];
    }
  }
  return min;
}
int main()
{
  int A[] = {1, 5, 7, 4, 2, 11};
  int n = sizeof(A) / sizeof(A[0]);
cout<<"the largest number is:- "<<maximum(A,n)<<endl;
cout<<"the smallest number is:- "<<minmum(A,n);

  return 0;
}
