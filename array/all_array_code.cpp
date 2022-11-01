#include <iostream>
using namespace std;
struct array
{
  int A[20];
  int size;
  int length;
};

void display(struct array arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    cout << arr.A[i] << " \t";
  }
}

void append(struct array *arr, int num)
{
  if (arr->length < arr->size)
  {
    arr->A[arr->length++] = num;
  }
}
void insert(struct array *arr, int index, int value)
{

  for (int i = arr->length; i >= index; i--)
  {
    arr->A[i] = arr->A[i - 1];
  }
  arr->A[index] = value;
  arr->length++;
}
void deleteArray(struct array *arr, int index)
{

  for (int i = index; i < arr->length - 1; i++)
  {
    arr->A[i] = arr->A[i + 1];
  }
  arr->length--;
}
int linearSearch(struct array *arr, int key)
{
  for (int i = 0; i < arr->length; i++)
  {
    if (key == arr->A[i])
    {
      return i;
    }
  }
  return -1;
}

int linearTransposition(struct array *arr, int key)
{

  int i, temp;
  for (int i = 0; i < arr->length; i++)
  {
    if (key == arr->A[i])
    {
      temp = arr->A[i];
      arr->A[i] = arr->A[i - 1];
      arr->A[i - 1] = temp;
    }
  }
}
int linearMoveToFront(struct array *arr, int key)
{

  int i, temp;
  for (int i = 0; i < arr->length; i++)
  {
    if (key == arr->A[i])
    {
      temp = arr->A[i];
      arr->A[i] = arr->A[0];
      arr->A[0] = temp;
    }
  }
}

int binarySearch(struct array arr, int key)
{
  int l, mid, h;
  l = 0;
  h = arr.length - 1;
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (key == arr.A[mid])
      return mid;
    else if (key < arr.A[mid])
      h = mid - 1;
    else
      l = mid + 1;
  }
  return -1;
}

void reverse(struct array *arr)
{
  int temp;
  for (int i = 0, j = arr->length - 1; i < j; i++, j--)
  {
    temp = arr->A[i];
    arr->A[i] = arr->A[j];
    arr->A[j] = temp;
  }
}

void leftShift(struct array *arr)
{
  int i;
  for (i = 0; i < arr->length; i++)
  {
    arr->A[i - 1] = arr->A[i];
  }
  arr->A[arr->length - 1] = 0;
}
void rightShift(struct array *arr)
{
  int i;
  for (i = arr->length - 1; i > 0; i--)
  {
    arr->A[i + 1] = arr->A[i];
  }
  arr->A[0] = 0;
}

void rotate(struct array *arr)
{
  int temp;
  temp = arr->A[0];
  for (int i = 0; i < arr->length; i++)
  {
    arr->A[i - 1] = arr->A[i];
  }
  arr->A[arr->length - 1] = temp;
}
void InsertSorted(struct array *arr, int num)
{
  int i;
  for (i = arr->length - 1; num < arr->A[i]; i--)
  {
    if (num < arr->A[i])
    {
      arr->A[i + 1] = arr->A[i];
    }
  }
  arr->A[i + 1] = num;
  arr->length++;
}

int sortedOrNot(struct array arr)
{

  for (int i = 0; i < arr.length - 2; i++)
  {
    if (arr.A[i] > arr.A[i + 1])
    {
      return false;
    }
  }
  return true;
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void separatePsNg(struct array *arr)
{
  int i, j, temp;
  j = arr->length - 1;
  i = 0;
  while (i < j)
  {
    while (arr->A[i] < 0)
    {
      i++;
    }
    while (arr->A[j] >= 0)
    {
      j--;
    }
    if (i < j)
    {

      swap(&arr->A[i], &arr->A[j]);
    }

    // temp = arr->A[i];
    // arr->A[i] = arr->A[j];
    // arr->A[j] = temp;
  }
}

void mergeSort(struct array *arr, struct array *arr2,struct array *arr3)
{
  int k=0 ,i=0,j=0;
  while(i<arr->length && j< arr2->length)
  {
    if (arr->A[i]<arr2->A[j])
    {
      arr3->A[k++]=arr->A[i++];

    }else{
      arr3->A[k++]=arr2->A[j++];
    }
    
  }
  for ( ; i < arr->length; i++)
  {
    arr3->A[k++]=arr->A[i++];
  }
  
  for ( ; j < arr2->length; j++)
  {
    arr3->A[k++]=arr2->A[j++];
  }
  

  
}

int main()
{
  // int n;
  int a = 10, b = 15;
  struct array arr = {{1, 5, 8, 10, 13}, 20, 5};
  struct array arr2 ={{2,  3, 4, 5, 6, 7,}, 20, 10};
  struct array arr3[11];

  // int arr[]={5,2,3,4,5,6,7,8,9,10};
  // cout << linearSearch(&arr, 3);
  // linearTransposition(&arr, 3  );
  // linearMoveToFront(&arr, 2  );
  // cout << binarySearch(arr, 16) << endl;
  // reverse(&arr);
  // insert(&arr,3,7);
  // append(&arr,6);

  // swap(&a, &b);
  // cout<<a<<b;

  // leftShift(&arr);
  // rightShift(&arr);

  // rotate(&arr);
  // deleteArray(&arr, 3);

  // InsertSorted(&arr, 12);

  // string result =sortedOrNot(arr)?"true":"false";
  // cout<< result;

  //  n = sizeof(arr) / sizeof(arr[0]);
  // cout<<sizeof(arr);

  // separatePsNg(&arr);

  display(arr2);
  return 0;
}