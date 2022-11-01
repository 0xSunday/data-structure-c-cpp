#include <iostream>
using namespace std;
int Missing2(int arr2[], int n2)
{
  int lastdup = 0;

  for (int i = 0; i < n2; i++)
  {
    if (arr2[i] == arr2[i + 1] && arr2[i]!= lastdup)
    {
      // cout <<i<<endl;  index of missing number
     cout<<"value is "<<arr2[i]<<" and index is "<<i<<endl;
     lastdup = arr2[i];
    }
  }

  return 0;
}

int main()
{

  int arr2[] = {4, 5, 5, 6, 6, 6, 6 ,7, 10, 12};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  int result2 = Missing2(arr2, n2);

  return 0;
}