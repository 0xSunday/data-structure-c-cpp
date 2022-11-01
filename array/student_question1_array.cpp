// find the missing element

#include <iostream>
using namespace std;
int Missing2(int arr2[], int n2);
int missing(int arr[], int n)
{
  n = 9;
  int sum = 0, s = 0, result;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  n = n + 1;
  s = n * (n + 1) / 2;
  return s - sum;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  // int result = missing(arr,n);
  // cout<<result;
  int arr2[] = {4, 5, 6, 7, 8, 10};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  int result2 = Missing2(arr2, n2);

  return 0;
}

// another way
int Missing2(int arr2[], int n2)
{
  int start = arr2[0];
  
  int missing;
  for (int i = 0; i < n2; i++)
  {
    if (arr2[i] - i != start)
    {
      cout<<i+start<<endl;
      break;
    }
  }
  return 0;
}
