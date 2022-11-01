#include <iostream>
using namespace std;

void mergeArray(int arr[], int arr2[], int arr3[], int n1, int n2)
{
  int i, j, k;
  i = j = k = 0;

  while (i < n1 && j < n2)
  {
    
    if (arr[i] < arr2[j])
      arr3[k++] = arr[i++];
    else
      arr3[k++] = arr2[j++];
  }
  for (; i < n1; i++)
    arr3[k++] = arr[i];
  for (; j < n2; j++)
    arr3[k++] = arr2[j];
}

void unionArray(int arr[], int arr2[], int arr3[], int n1, int n2)
{
  int i, j, k;
  i = j = k = 0;

  while (i < n1 && j < n2)
  {
    if (arr[i] == arr2[j])
    {
      arr3[k++] = arr[i++];
      arr2[j++];
    }

    else if (arr[i] < arr2[j])
      arr3[k++] = arr[i++];
    else
      arr3[k++] = arr2[j++];
  }
  for (; i < n1; i++)
    arr3[k++] = arr[i];
  for (; j < n2; j++)
    arr3[k++] = arr2[j];
    
}

void interSection(int arr[], int arr2[], int arr3[], int n1, int n2)
{
  int i, j, k;
  i = j = k = 0;

  while (i < n1 && j < n2)
  {
    if (arr[i] == arr2[j])
    {
      arr3[k++] = arr[i++];
      arr2[j++];
    }

    else if (arr[i] < arr2[j])
       arr[i++];
    else
      arr2[j++];
  }
  // for (; i < n1; i++)
  //   arr3[k++] = arr[i];
  // for (; j < n2; j++)
  //   arr3[k++] = arr2[j];
}


int main()
{
  int arr1[] = {1, 3, 5, 7};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);

  int arr2[] = {2, 3, 4, 5};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  int arr3[n1 + n2];
  // mergeArray(arr1, arr2, arr3, n1, n2);
  // unionArray(arr1, arr2, arr3, n1, n2);
  unionArray(arr1, arr2, arr3, n1, n2);

  cout << "Array after merging" << endl;
  for (int i = 0; i < n1 + n2; i++)
    cout << arr3[i] << " ";

  return 0;
}