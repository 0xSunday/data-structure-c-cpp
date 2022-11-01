
#include <iostream>
using namespace std;
class Array
{
private:
  int *A;
  int size=20;
  int length;

public:
  Array()
  {
    size = 20;
    length = 0;
    A = new int[size];
    
  }
  Array(int sz)
  {
    size = sz;
    length = 0;
    A = new int[size];
  }
  ~Array()
  {
    delete[] A;
  }
  void Display();

  Array *Merge(Array arr2);
};
void Array::Display()
{
  int i;
  cout << "\nElements are\n";
  for (i = 0; i < length; i++)
    cout << A[i] << " ";
}
Array *Array::Merge(Array arr2)
{
  int i, j, k;
  i = j = k = 0;

  Array *arr3 = new Array(length + arr2.length);

  while (i < length && j < arr2.length)
  {
    if (A[i] < arr2.A[j])
      arr3->A[k++] = A[i++];
    else
      arr3->A[k++] = arr2.A[j++];
  }
  for (; i < length; i++)
    arr3->A[k++] = A[i];
  for (; j < arr2.length; j++)
    arr3->A[k++] = arr2.A[j];
  arr3->length = length + arr2.length;

  return arr3;
}
int main()
{
 Array arr ;
 Array *arr2 []= {{1, 3, 5, 6, 7},20,5};
 
  
  return 0;
}
